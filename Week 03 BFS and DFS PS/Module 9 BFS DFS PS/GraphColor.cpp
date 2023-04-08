// https://cses.fi/problemset/task/1668#:~:text=CSES%20%2D%20Building%20Teams&text=There%20are%20n%20pupils%20in,the%20sizes%20of%20the%20teams.
/*
 -> Graph Color
 -> Buidling Teams

 Input:
5 3
1 2
1 3
4 5
Output:
1 2 2 1 2

*/

#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

int visited[N];

int color[N];

vector<int> adj_list[N];

bool dfs(int node)
{
    visited[node] = 1;

    for (int adj_node : adj_list[node])
    {
        if (visited[adj_node] == 0)
        {
            if (color[node] == 1)
                color[adj_node] = 2;
            else
                color[adj_node] = 1;

            bool is_bicolorable = dfs(adj_node);
            if (!is_bicolorable)
            {
                return false;
            }
        }
        else
        {
            // Check if color is same or different
            if (color[node] == color[adj_node])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    bool is_bicolorable = true;
    for (int i = 1; i <= nodes; i++)
    {
        if (visited[i] == 0)
        {
            color[i] = 1;
            bool ok = dfs(i);
            if (!ok)
            {
                is_bicolorable = false;
                break;
            }
        }
    }

    if (!is_bicolorable)
    {
        cout << "IMPOSSIBLE" << '\n';
    }
    else
    {
        for (int i = 1; i <= nodes; i++)
        {
            cout << color[i] << ' ';
        }
    }
    cout << '\n';
    return 0;
}