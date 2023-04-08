
// https://cses.fi/problemset/task/1193

/*
Input
5 8
########
#.A#...#
#.##.#B#
#......#
########

Output-> 9

#-> -1
. -> 0
A to B

(5, 6) ---> right --> (5, 7)
(5, 6)----> left =>> (5, 5)
(5, 6) ---- up----> (4,6)
(5, 6) ----> Down ----> (6, 6)

(x, y) -----> R ---> (x, y+1)
(x, y) -----> L ---> (x, y-1)
(x, y) -----> U ---> (x -1, y)
(x, y) -----> D ---> (x +1, y)

x, Y
0 1
0 -1
-1 0
1  0

dx[] = {0, 0, -1, 1}
dy[] = {1, -1, 0, 0}


for(int i=0; i<4; i++)
{
    int new_x = x + dx[i];
    int new_y = y + dy[i];
}

1. Is the cell within the maze
2. Is the cell forbidden/Wall?
3. Is the cell visited?

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 2002;
int maze[N][N];
int visited[N][N];
int level[N][N];
int n, m;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool is_insde(pair<int, int> coord)
{
    int x = coord.first;
    int y = coord.second;

    if (x >= 0 && x < n && y >= 0 && y < m)
    {
        return true;
    }
    return false;
}

bool is_safe(pair<int, int> coord)
{
    int x = coord.first;
    int y = coord.second;
    if (maze[x][y] == -1)
    {
        return false;
    }
    return true;
}

void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    visited[src.first][src.second] = 1;
    level[src.first][src.second] = 0;

    q.push(src);
    while (!q.empty())
    {
        pair<int, int> head = q.front();
        q.pop();

        int x = head.first;
        int y = head.second;

        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            pair<int, int> adj_node = {new_x, new_y};

            if (is_insde(adj_node) && is_safe(adj_node) && visited[new_x][new_y] == 0)
            {

                visited[new_x][new_y] = 1;
                level[new_x][new_y] = level[x][y] + 1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{

    cin >> n >> m;

    pair<int, int> src, dst;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            level[i][j] = -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        for (int j = 0; j < m; j++)
        {
            if (input[j] == '#')
            {
                maze[i][j] = -1;
            }
            else if (input[j] == 'A')
            {
                src = {i, j};
            }
            else if (input[j] == 'B')
            {
                dst = {i, j};
            }
        }
    }

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<m; j++)
    //     {
    //         cout<<maze[i][j]<<"\t";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";

    bfs(src);

    if (level[dst.first][dst.second] == -1)
    {
        cout << "NO"
             << "\n";
    }
    else
    {
        cout << "YES"
             << "\n";
        cout << level[dst.first][dst.second] << "\n";
    }

    return 0;
}
