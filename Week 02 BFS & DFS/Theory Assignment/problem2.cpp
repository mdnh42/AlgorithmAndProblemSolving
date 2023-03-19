#include<bits/stdc++.h>
using namespace std; 

int power(int n, int m)
{
    if(m==0) return 1; 

    if(n == 0) return 0; 

    return n * power(n, m-1);
}

int main()
{
    int n, m; 
    cin>>n>>m; 
    int Power = power(n, m);
    cout<<Power<<"\n"; 
    return 0; 
}