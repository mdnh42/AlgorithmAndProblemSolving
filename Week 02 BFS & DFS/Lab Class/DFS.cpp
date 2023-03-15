#include<bits/stdc++.h>
using namespace std; 
const int N = 1e5;

int visisted[N]; 

vector<int>adj_list[N];

void dfs(int node)
{
    cout<<node<<"\n";
    visisted[node] = 1; 
    for(int adj_node: adj_list[node]){
        if(visisted[adj_node] == 0)
        {
            dfs(adj_node);
        }
    }
}

int main()
{
    int nodes, edges; 
    cin>>nodes>>edges; 

    for(int i=0; i<edges; i++)
    {
        int u, v; 
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 0; 
    dfs(src);
    return 0; 
}

/*
0----1----2-----3
     |    |
     |    |
     5----4

# of node->6
# of edge->6
list of adj nodes->
6 6
0 1
1 2
2 3
1 5
2 4
5 4

6 5
0 1
2 3
1 5
2 4
5 4
*/