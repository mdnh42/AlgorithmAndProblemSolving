/*



*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
// const long long int INF = 1e18;
const int INF = 1e9;

vector<pair<int, int>> adj_list[N];
int d[N], visited[N];

int nodes, edges;

void dijkstra(int src)
{
    for (int i = 1; i <= nodes; i++)
    {
        d[i] = INF;
    }
    d[src] = 0;
    for (int i = 0; i < nodes; i++)
    {
        int selected_node = -1;
        for (int j = 1; j <= nodes; j++)
        {
            if (visited[j] == 1)
                continue;
            if (selected_node == -1 || d[selected_node] > d[j])
            {
                selected_node = j;
            }
        }
        visited[selected_node] = 1;
        for (auto adj_entry : adj_list[selected_node])
        {
            int adj_node = adj_entry.first;
            int edge_cst = adj_entry.second;

            if (d[selected_node] + edge_cst < d[adj_node])
            {
                d[adj_node] = d[selected_node] + edge_cst;
            }
        }
    }
}

int main()
{

    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }
    int src = 2;
    dijkstra(src);

    for (int i = 1; i <= nodes; i++)
    {
        cout << d[i] << " ";
    }
    cout << "\n";

    return 0;
}

/*
7 12
1 2 3
1 3 22
1 4 1
1 6 3
1 8 3
2 3 18
3 4 2
3 7 1
4 8 10
4 7 4
6 8 2
6 7 2



1-.2, 3
2-1, 3
1-3 , 22
3-1 , 22
1-4, 1
4-1, 1
1-6, 3
6-1, 3
1-8, 3
8-1, 3
2-3 ,18
3-2 ,18
3-4 ,2
4-3 ,2
3-7, 1
7-3, 1
4-8 ,10
8-4 ,10
4-7 ,4
7-4 ,4
6 -8 ,2
8-6 ,2
6 -7 ,2
7-6 ,2
*/