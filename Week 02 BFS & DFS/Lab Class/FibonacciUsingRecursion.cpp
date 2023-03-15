/*
    Fibonacci Series: 0 1 1 2 3 5 8 13 21->fibo number.
*/

#include<bits/stdc++.h>
using namespace std; 

int fibonacci(int n)
{
    // Base Case
    if(n==0) return 0; 
    if(n==1) return 1; 

    // General Case 
    int num1 = fibonacci(n-1);
    int num2 = fibonacci(n-2);
    // return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n; 
    cin>>n; 
    cout<<fibonacci(n)<<"\n";
    
    return 0; 
}