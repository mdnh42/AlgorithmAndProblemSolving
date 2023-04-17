// https://atcoder.jp/contests/dp/tasks/dp_a
/*
4 
1       2       3       4
10      30      40      20
 

*/


/*
A- Frog 1 
- State: stone(n) -> cost of reaching n-th stone from 1st stone 
- Recurrance: stone(n) = min(
                                stone(n-1) = abs(h[n] - h[n-1])
                                stone(n-2) = abs(h[n] - h[n-2])
)

- base case: stone(1) = 0
 


*/
#include<bits/stdc++.h>
using namespace std; 
const int N = 1e5+5; 
int h[N]; 
int dp[N];


int main()
{
    int n; 
    cin>>n; 

    for(int i=1; i<=n; i++){
        cin>>h[i];
    }
    
    for(int i = 1; i<=n; i++){
        dp[i] = -1;
    }

//    1. Handle Base Case : 
    dp[1] = 0; 

    // 2. Loop through the state 

    for(int i = 2; i<=n; i++){
        // 2.1 Solve from the smaller subproblem 
        int ans1 = dp[i-1] + abs(h[i] - h[i-1]); 

        if(i==2){
            dp[i] = ans1; 
            continue;
        }

        int ans2 = dp[i-2] + abs(h[i] - h[i-2]);

        dp[i] = min(ans1, ans2);

    }

    cout<<dp[n]<<"\n";
    
    return 0;
}

