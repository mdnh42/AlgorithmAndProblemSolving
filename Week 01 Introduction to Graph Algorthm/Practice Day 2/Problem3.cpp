/*
Topic: adjacency Matrix 
0-----1
    /   \
    2---3

Total Nodes 4 
Total Edge = 4 
Undirected and Unwighted 

Matrix of Node x of Nodes 
 - 4 x 4 

 Matrix[i][j] = 1
    if and only f (i->j)


0 - 1
1 - 0
1 - 2
2 - 1
1 - 3
3 - 1
2 - 3 
3 - 2
0 1 0 0 
1 0 1 1
0 1 0 1
0 1 1 0
*/



#include<bits/stdc++.h>
using namespace std; 
vector<vector<int>> convert(vector<vector<int>> a)
{
    vector<vector<int>> adj_list (a.size());
    for(int i=0; i<a.size(); i++)
    {
        for(int j = 0; j<a[i].size(); j++)
        {
            if(a[i][j] != 0)
            {
                adj_list[i].push_back(j);
            }
        }
    }
    return adj_list;
}

int main()
{
    vector<vector<int>> a; 

    vector<int> p({0, 1, 0, 0});
    vector<int> q({1, 0, 1, 1});
    vector<int> r({0, 1, 0, 1});
    vector<int> s({0, 1, 1, 0});
    a.push_back(p);
    a.push_back(q);
    a.push_back(r);
    a.push_back(s);
    vector<vector<int>>adj_list = convert(a);

    cout<<"Adjacency List: \n";
   

    for(int i = 0; i< adj_list.size(); i++)
    {
        cout<<i;
        for(int j = 0; j<adj_list[i].size(); j++)
        {
            if(j== adj_list[i].size() - 1)
            { 
                cout<< " -> " << adj_list[i][j] <<"\n";
                break;
            }
            else
            {
                cout<<" ->" <<adj_list[i][j];
            }
        }
    }

    return 0;
}





















/*
    Adjacency List 
0-----1
    /   \
    2---3

    0->1
    1-> 0, 2, 3
    2-> 1, 3
    3-> 1, 2
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int nodes = 4; 
    vector<int>adj_list[nodes];

    adj_list[0] = {1};
    adj_list[1] = {0, 2, 3};
    adj_list[2] = {1, 3};
    adj_list[3] = {1, 2};

    for(int i = 0; i<nodes; i++)
    {
        cout<<i<<" ->";
        for(int j =0; j< adj_list[i].size(); j++)
        {
            cout<<adj_list[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0; 
}

*/