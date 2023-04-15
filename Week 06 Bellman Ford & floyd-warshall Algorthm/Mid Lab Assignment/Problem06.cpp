#include <bits/stdc++.h>
using namespace std;


bool Is_Palindrome(string str)
{
    map<char, int> char_map;


    for (int i = 0; i < str.length(); i++)
    {
        char_map[str[i]]++;
    }


    int oddCount = 0;
    for (auto x : char_map)
    {
        if (x.second % 2 != 0)
        {
            oddCount++;
        }
    }


    if (oddCount > 1 || oddCount == 1 && str.length() % 2 == 0)
    {
        return false;
    }


    return true;
}


int main()
{
    string str;
    cin >> str;
    bool Is_Possible = Is_Palindrome(str);
    if (Is_Possible)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
    return 0;
}
