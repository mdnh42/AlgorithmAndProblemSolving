/*
Input:
4 4
1 2 10
1 3 5
2 3 -12
3 4 4
Output:
0
10
-2
2

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int INF = 1e9;

vector<pair<int, int>> adj_list[N];

int d[N];

int main()
{
    int n, m; // n = node and m = edges
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        d[i] = INF;
    }

    for (int i = 0; i < m; i++)
    {
        int u, v, w; // u->v and w - weighted
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
    }

    int src = 1;
    d[src] = 0;

    bool negative_cycle = false;

    for (int i = 1; i <= n; i++)
    {
        for (int node = 1; node <= n; node++)
        {
            for (pair<int, int> adj_node : adj_list[node])
            {
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;

                if (d[u] + w < d[v])
                {
                    d[v] = d[u] + w;
                    if (i == n)
                    {
                        negative_cycle = true;
                    }
                }
            }
        }
    }
    if (negative_cycle == true)
    {
        cout << "Graph has negative Cycle"
             << "\n";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << d[i] << "\n";
        }
    }

    cout << "\n";

    return 0;
}