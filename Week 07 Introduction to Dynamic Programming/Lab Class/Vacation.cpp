// https://atcoder.jp/contests/dp/tasks/dp_c

/*
-   state: fun(n, x) -> Maximum happiness till day-n
    if we pick task-x on day-n

- Recurance: fun(n, x) = max {
    fun(n-1, y) where x != y
    + happiness [n][x]
}

- Base Case: fun(1, x) = happiness[n][x]

*/

int fun(int day, int current_task)
{
    // 1. Base Case
    if (day == 1)
    {
        return happiness[day][current_task];
    }

    // 2. If asnwer is already calculated return it
    if (dp[day][current_task] != -1)
    {
        return dp[day][current_task];
    }
    int max_profit = 0;
    // 3. Calculate the answer from smaller sub problems
    for (int last_task = 1; last_task <= 3; last_task++)
    {
        if (last_task != current_task)
        {
            int candidate_profite = fun(day - 1, last_task) + happiness[day][current_task];
            max_profit = max(max_profit, candidate_profite);
        }
    }

    dp[day][current_task] = max_profit;
    return max_profit;
}

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int happiness[N][4], dp[N][4];

int main()
{
    int n;
    for (int i = 1; i <= n; i++)
    {
        // int a, b, c;
        // cin >> a >> b >> c;
        // happiness[i][1] = a;
        // happiness[i][2] = a;
        // happiness[i][3] = a;
        for (int j = 1; j <= 3; j++)
        {
            cin >> happiness[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            dp[i][j] = -1;
        }
    }

    int ans1 = fun(n, 1);
    int ans2 = fun(n, 2);
    int ans3 = fun(n, 3);

    cout << max({ans1, ans2, ans3}) << "\n";

    return 0;
}