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

long long knapsack(int n, int cap)
{
    // 1. base case:
    if (n == 0)
    {
        return 0;
    }
    // 2. if result is already calculated for this state return it
    if (dp[n][cap] != -1)
    {
        return dp[n][cap];
    }
    if (cap < wt[n])
    {
        int ans = knapsack(n - 1, cap);
        dp[n][cap] = ans;
        return ans;
    }

    int ans1 = val[n] + knapsack(n - 1, cap - wt[n]);
    int ans2 = knapsack(n - 1, cap);

    int ans = max(ans1, ans2);

    dp[n][cap] = ans;
    return ans;
}

int main()
{
    int n, cap;
    cin >> n >> cap;

    for (int i = 1; i <= n; i++)
    {
        cin >> wt[i] >> val[i];
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= cap; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n, cap) << "\n";
    return 0;
}