/*
Fixed Size
Sub Array: (1 2) (3 4 5) (6 7)

Maximum Sub-array sum:
Sliding Window

9 3
5 6 1 13 7 5 12 8 2

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    
    int l = 0, r = 0, sum = 0, ans = -1;
    while (r < n)
    {
        sum += v[r];
        if (r - 1 + 1 < k)
        {
            r++;
        }
        else if (r - 1 + 1 == k)
        {
            ans = max(ans, sum);
            sum -= v[l];
            l++;
            r++;
        }
    }

    cout << ans << '\n';

    return 0;
}