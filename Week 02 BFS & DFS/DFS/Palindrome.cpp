#include<bits/stdc++.h>
using namespace std; 

bool is_palindrom(string str)
{
    if(str == "" || str.size() == 1){
        return true; 
    }
    int n = str.size(); 

    string small_str = str.substr(1, n-2);
    return is_palindrom(small_str) && (str[0] == str.back());
}
int main()
{
    string str; 
    cin>>str; 

    if(is_palindrom(str)){
        cout<<"Palindrome"; 
    }
    else{
        cout<<"Not Palindrome";
    }
    
    return 0;
}