#include<bits/stdc++.h>
using namespace std;

int sum(vector<int>numbers){
    int n = numbers.size(); 
    if(n==0){
        return 0;
    }

    return numbers[n-1] + sum(vector<int>(numbers.begin(), numbers.end()-1));
}

int main()
{

    int n; 
    cin>>n; 
    
    vector<int>numbers(n); 
    for(int i=0; i<n; i++){
        cin>>numbers[i]; 
    }

    

    cout<<sum(numbers)<<"\n";

    return 0; 
}