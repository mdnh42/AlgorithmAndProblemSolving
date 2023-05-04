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

int main()
{
    int row, col;
    cin >> row >> col;
    // Base Case:
    dp[0][0] = 1;

    // Loop over the state
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 & j == 0)
            {
                continue;
            }
            int ans = 0;
            if (i > 0)
                ans += dp[i - 1][j];
            if (j > 0)
                ans += dp[i][j - 1];
            dp[i][j] = ans;
        }
    }
    cout << dp[row - 1][col - 1] << "\n";

    return 0;
}