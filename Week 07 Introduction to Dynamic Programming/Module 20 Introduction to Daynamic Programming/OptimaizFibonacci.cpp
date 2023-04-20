// Series using Dynamic Programming

#include <bits/stdc++.h>
using namespace std;
// Declare DP Array for Optimazing
long long int DP[101];

long long int fib(int n)
{
    // Base Case
    if (n <= 2)
    {
        return 1;
    }

    // Corner case: check if fib(n) is already calculated
    if (DP[n] != 0)
    {
        return DP[n];
    }
    // Recursive Call and Store DP array
    DP[n] = fib(n - 1) + fib(n - 2);
    return DP[n];
}

int main()
{
    cout << fib(3) << "\n";
    cout << fib(5) << "\n";
    cout << fib(50) << "\n";

    return 0;
}

/*
1  2  3  4  5  6  7   8   9
1, 1, 2, 3, 5, 8, 13, 21, 34 ......
*/