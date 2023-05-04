// https://leetcode.com/problems/fibonacci-number/

/*
F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.


Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
*/

#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    // Base Case:
    if (n == 0)
    {
        return 0;
    }
    if (n <= 2)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << "\n";
}