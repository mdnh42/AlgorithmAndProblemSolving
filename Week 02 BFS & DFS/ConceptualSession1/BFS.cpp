#include<bits/stdc++.h>
using namespace std; 

const int maxN = 1000; 
vector<int> adj[maxN];
bool visited[maxN]; 
void bfs(int s)
{
    queue<int>q; 
    cout<<s<<" "; 
    visited[s] = true; 
    q.push(s); 
    while(!q.empty())
    {
        int node = q.front(); 
        q.pop();
        for(int child: adj[node])
        {
            if(!visited[child])
            {
                visited[child] = true; 
                q.push(child);
                cout<<child<<" ";
            }
        }

    }
}

int main()
{
    int n, e; 
    cin>>n>>e; 
    for(int i=1; i<=e; i++)
    {
        int u, v; 
        cin>>u>>v; 
        adj[u].push_back(v); 
        adj[v].push_back(u);

    }
    bfs(1);
    return 0; 
}

