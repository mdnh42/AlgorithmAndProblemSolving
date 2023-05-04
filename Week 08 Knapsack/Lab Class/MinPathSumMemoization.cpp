#include <bits/stdc++.h>
using namespace std;

const int N = 201;
int dp[N][N];

int minPathSum(int n, int m)
{
    if ()
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << minPathSum(n, m) << "\n";
    return 0;
}