/*
Climbing Stair
n = 5
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 11000;
int dp[N];
int climbStairs(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    if (n == 3)
        return 3;

    if (dp[n] != -1)
    {
        return dp[n];
    }

    int ans = (climbStairs(n - 1) + climbStairs(n - 2));
    dp[n] = ans;

    return ans;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1; // Mark all states as unvisited
    }
    cout << climbStairs(n) << "\n";
    return 0;
}