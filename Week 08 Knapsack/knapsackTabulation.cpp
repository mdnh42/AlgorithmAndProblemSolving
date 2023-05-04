/*
https://atcoder.jp/contests/dp/tasks/dp_d

1. State: knapsack(n, cap) => maximum profit considering objects 1 to n and capacity cap.
2. recurrance:
            knapsack(n, cap) -> max {
                                        val[n] + knapsack(n-1, cap - wt[n]),
                                        knapsack(n-1, cap)
            }
3. Base_case: knapsack(0, x) = 0
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 102;
const int M = 1e5 + 5;

long long dp[N][M];
int wt[N], val[N];

int main()
{
    int n, w;
    cin >> n >> w;

    for (int i = 1; i <= n; i++)
    {
        cin >> wt[i] >> val[i];
    }

    // 1. handle base case :
    for (int i = 0; i <= w; i++)
    {
        dp[0][i] = 0;
    }

    // 2. loop over he states:
    for (int i = 1; i <= n; i++)
    {
        for (int cap = 0; cap <= w; cap++)
        {
            // 2.1 Calculate the the result form smaller sub problem:
            dp[i][cap] = max(
                val[i] + dp[i - 1][cap - wt[i]]);
            dp[i - 1][cap];
        }
    }

    cout << dp[n][w] << "\n";
    return 0;
}