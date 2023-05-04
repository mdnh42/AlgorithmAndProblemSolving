/*
Memoization:
1. Handle Base Case
2. If Current state is already solved, return the result
3. Calculate the result from smaller sub problems

*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dp[N];

int operation(int n)
{
    // Base Case:
    if (n == 1)
    {
        return 0;
    }
    // Check Already COmpleted ?

    if (dp[n] != -1)
    {
        return dp[n];
    }
    // Step: 01
    int ans = 1 + operation(n - 1);
    // Step: 02
    if (n % 2 == 0)
    {
        ans = min(ans, 1 + operation(n / 2));
    }
    if (n % 3 == 0)
    {
        ans = min(ans, 1 + operation(n / 3));
    }
    dp[n] = ans;
    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
    }

    cout << operation(n) << '\n';

    return 0;
}