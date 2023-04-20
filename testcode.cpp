/*
- How to Solve Dynamic Programming
        DP Step:
            1.  Define State
            2.  Identify the Recursive equation from
                the smaller subproblem
            3.  Define base cases

         Two ways solve Problem using DP
            1. Memoization/ Recursive/ Top-Down
            2. Tabulation/Iterative/Bottom-up

            # Memoization-Method (Recursive)
            ================================
                1. Handle Base Case
                2. If Current state is already solved, return the result
                3. Calculate the result from smaller sub problems

            # Tabulation-Method (Iterative)
            ===============================
                1. Handle Base Case
                2. Loop through the state
                    2.1 and Calculate the answer from smaller sub problem

*/

#include <bits/stdc++.h>
using namespace std;
/*
stone(n) = min{stone(n-2)+|hn - hn-2|
            stone(n-1)+|hn - hn-1|}
*/
const int N = 1e6;
int h[N];
int dp[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    // 1. Handle Base Case:
    dp[1] = 0;
    // 2. Loop Through the States

    for (int i = 2; i <= n; i++)
    {
        // 2.1: Solve from smaller sub-problem
        int ans1 = dp[i - 1] + abs(h[i] - h[i - 1]);
        if (i == 2)
        {
            dp[i] = ans1;
            continue;
        }
        int ans2 = dp[i - 2] + abs(h[i] - h[i - 1]);
        dp[i] = min(ans1, ans2);
    }

    cout << dp[n] << "\n";
    return 0;
}