/*
    Time Complexity: O(n*m)


    - state: f(n, m) -> number of unique path from (0,0) to (n, m)
    - recurrance: f(n, m) -> f(n-1, m) + f(n, m-1)
    - base case: f(0,0) = 1;
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 101;
int dp[N][N];

int unique_paths(int n, int m)
{
    // Base Case:
    if (n == 0 && m == 0)
    {
        return 1;
    }
    // If result is already calculated return it
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }
    // Calculate result from smaller sub-problems
    int ans = 0;
    if (n > 0)
    {
        ans += unique_paths(n - 1, m);
    }
    if (m > 0)
    {
        ans += unique_paths(n, m - 1);
    }

    dp[n][m] = ans;
    return ans;
}

int main()
{
    int row, col;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << unique_paths(row - 1, col - 1) << "\n";
}