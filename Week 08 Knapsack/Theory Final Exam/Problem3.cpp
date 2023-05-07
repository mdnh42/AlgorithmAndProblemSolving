#include <bits/stdc++.h>
using namespace std;

const int N = 10005;
int dp[N];

int perfectSquares(int n)
{
    if (n == 0)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    int ans;
    for (int i = 1; i * i <= n; i++)
    {
        int squares = 1 + perfectSquares(n - i * i);
        ans = min(ans, squares);
    }
    dp[n] = ans;
    return ans;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout << perfectSquares(n) << endl;
    return 0;
}
