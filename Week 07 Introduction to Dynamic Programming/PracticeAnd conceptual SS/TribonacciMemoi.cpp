#include <bits/stdc++.h>
using namespace std;

const int N = 101;
/*
Nth Number Calculate

fib(2=> n) return 1;

fib(n) = fib(n-1) + fibo(n-2) + fib(n-3)


*/
int dp[N]; // DP array

int fib(int n)
{
    if (n <= 3)
        return 1;

    if (dp[n] != -1)
    { // Current state already solved.
        return dp[n];
    }

    int ans = fib(n - 1) + fib(n - 2) + fib(n - 3);
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
    // memset(dp, -1, sizeof(dp));

    cout << fib(n) << "\n";
    return 0;
}

//