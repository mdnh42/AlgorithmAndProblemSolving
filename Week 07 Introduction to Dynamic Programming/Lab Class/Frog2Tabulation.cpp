/*
https://atcoder.jp/contests/dp/tasks/dp_b
1 to N

- State: stone(n) -> cost of reaching n-th stone from 1st stone
- Recurrence: stone(n) = for i = 1 to k:
                                        min (
                                            stone(n-1) + abs(h[n] - h[n-i])
                                        )

- Base case : stone(1) = 0

*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int INF = 2e9;
int h[N], dp[N];

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    // Base Case
    dp[1] = 0;

    // Loop over the states

    for (int i = 2; i <= n; i++)
    {
        dp[i] = INF;
        // Calculate answer form smaller sub-problem
        for (int j = 1; j <= k; j++)
        {
            int from_stone = i - j;
            if (from_stone <= 0)
            {
                break;
            }
            int candidate_ans = dp[i - j] + abs(h[i] - h[n - i]);
            dp[i] = min(dp[i], candidate_ans);
        }
    }
    cout << dp[n] << "\n";
    return 0;
}