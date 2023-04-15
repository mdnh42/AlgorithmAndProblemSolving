#include<bits/stdc++.h>
using namespace std; 

int fib(int n){
    // base Case:
    if(n<=2) return 1;

    return fib(n-1) + fib(n-2); 
}

int main()
{
    cout<<fib(3)<<"\n";
    cout<<fib(5)<<"\n";
    cout<<fib(50)<<"\n";

    return 0; 
}


/*
1  2  3  4  5  6  7   8   9
1, 1, 2, 3, 5, 8, 13, 21, 34 ...... 
*/