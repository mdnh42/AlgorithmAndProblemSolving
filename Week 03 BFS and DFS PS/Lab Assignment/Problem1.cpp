#include <bits/stdc++.h>
using namespace std;
const int SIZE = 100;
vector<vector<int>> adj_list(SIZE);
int main()
{
    int nodes;
    int adj_matrix[SIZE][SIZE];
    
    cin>> nodes;
    for(int i=0; i<nodes; i++)
    {
        for(int j =0; j<nodes; j++)
        {
            cin>> adj_matrix[i][j];
        }
    }

    for(int i=0; i<nodes; i++)
    {
        for(int j=0; j<nodes; j++)
        {
            if(adj_matrix[i][j] == 1)
            {
                adj_list[i].push_back(j);
            }
        }
    }

    for(int i=0; i<nodes; i++)
    {
        cout<< i<< ": ";
        for(int j=0; j<adj_list[i].size(); j++)
        {
            cout<<adj_list[i][j] <<" ";
        }
        cout<<"\n";
    }

    return 0;
}

