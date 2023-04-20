

// FIBONACCI SERIES USING RECURSION

// Time ComplexityO(2^n)
/*
Fibonacci Series: 1, 1, 2, 3, 5, 8, 13, 21, 34 ......
          Serial: 1  2  3  4  5  6  7   8   9

*/

#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    // Base Case:
    if (n <= 2)
        return 1;

    // Recursion
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    // Test Case:
    cout << fib(3) << "\n";
    cout << fib(5) << "\n";
    cout << fib(50) << "\n";
    // Not Working !!!

    return 0;
}
