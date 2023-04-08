/*
https://cses.fi/problemset/task/1669
Cycle Detection

Input:
5 6
1 3
1 2
5 3
1 5
2 4
4 5

Output:
Cycle Exist
Condition:
    1. visited[ajd_node] == 0 ->> unexplored node | apply dfs
    2. visited[adj_node] == 1 ->> 'paused' node | cycle detected
    3. visited[adj_node] == 2 ->> "done" node | continue


- Directed Graph


*/

#include <bits/stdc++.h>
using namespace std;
const int N = 2e6;

vector<int> adj_list[N];

int visited[N];

bool detect_cycle(int node)
{
    visited[node] = 1;

    for (int adj_node : adj_list[node])
    {
        if (visited[adj_node] == 0)
        {
            detect_cycle(adj_node);
        }
        else if (visited[adj_node] == 1)
        {
            bool got_cycle = detect_cycle(adj_node);
            if (got_cycle)
            {
                return true;
            }
        }
        else if (visited[adj_node] == 2)
        {
            return true;
        }
    }
    visited[node] = 2;
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v; // u _> v 
        adj_list[u].push_back(v);
    }

    bool cycle_exits = false;

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            bool got_cycle = detect_cycle(i);
            if (got_cycle)
            {
                cycle_exits = true;
                break;
            }
        }
    }

    if (cycle_exits)
    {
        cout << "Cycle Exists"
             << "\n";
    }
    else
    {
        cout << "No Cycle"
             << "\n";
    }
}