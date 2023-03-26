#include<bits/stdc++.h>
using namespace std;

int totEdge(int n)
{
    int result = 0; 
    result = (n*(n-1)/2);
    return result; 
}

int main()
{
    int n;
    cin>> n; 
    cout<<totEdge(n);

    return 0; 
}