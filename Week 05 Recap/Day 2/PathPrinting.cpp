/*
Path Printing BFS Traversal 
SRC = A 
DST = F

A ---- -B ---- C 
        |       |
        D -----E ---- F



Node    |  Parent[Node]
    A   |   -
    B   |   A
    C   |   B
    D   |   B
    E   |   C
    F   |   E
Q = A, B, C, D, E, F

Ouput: A, B, C, D, E, F

Parent: F, E, C, B, A 
Reverse Path: A, B, C, E, F

============= DFS ==============
Path Printing DFS Traversal 
SRC = A 
DST = F

A ---- -B ---- C 
        |       |
        D -----E ---- F



Node    |  Parent[Node]
    A   |   -
    B   |   A
    C   |   E
    D   |   B
    E   |   D
    F   |   E


Ouput: A, B, D, E, C, F 

Parent: F, E, D, B, A.
Reverse Path: A, B, D, E, F
*/

#include<bits/stdc++.h>
using namespace std; 

const int N = 1e6 + 5; 

vector<int>adj_list[N]; 
int visited[N], level[N], parent[N]; 

void bfs(int src){
    visited[src] = 1; 
    level[src] = 1; 

    queue<int>q;
    q.push(src);
    parent[src] = -1; 
    while(!q.empty()){
        int head = q.front();
        q.pop(); 

        for(int adj_node: adj_list[head]){
            if(visited[adj_node] == 0){
                parent[adj_node] = 1;
                visited[adj_node] = 1; 
                level[adj_node] = level[head] + 1; 
                q.push(adj_node);

            }
        }

    }

}

int main(){
    int n, m; 
    cin>>n>>m; 

    for(int i=0; i<m; i++){
        int u, v; 
        cin>>u>>v; 
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src_node = 1; 
    bfs(src_node);

    int dest_node = n; 
    if(visited[dest_node] == 0){
        cout<<"IMPOSSIBLE\n";
        return 0; 
    }

    cout<<level[dest_node] << "\n";
    vector<int>path; 
    int selected_node = dest_node; 

    while(true){
        path.push_back(selected_node); 
        if(selected_node == src_node){
            break;
        }
        selected_node = parent[selected_node]; 
    }
    reverse(path.begin(), path.end());

    for(int node: path){
        cout<<node << " ";
    }
    cout<<'\n';

    return 0; 
}