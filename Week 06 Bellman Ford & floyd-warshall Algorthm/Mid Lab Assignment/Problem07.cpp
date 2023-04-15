#include<bits/stdc++.h>
using namespace std;


int sum_of_digits(int num){
    if(num==0){
        return 0;
    }
    return (num %10 + sum_of_digits(num/10));
}


int main(){
    int num;
    cin>>num;


    cout<<sum_of_digits(num)<<"\n";
    return 0;
}
