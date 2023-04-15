#include <bits/stdc++.h>




using namespace std;




const int N = 1000;
int grid[N][N];
int visited[N][N];
int n, m, cnt;




int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};




bool is_inside(pair<int, int> coor)
{
    int x = coor.first;
    int y = coor.second;




    if (x >= 0 && x < n && y >= 0 && y < m)
    {
        return true;
    }
    return false;
}




bool is_safe(pair<int, int> coor)
{
    int x = coor.first;
    int y = coor.second;




    if (grid[x][y] == -1)
    {
        return false;
    }
    return true;
}




void dfs(pair<int, int> node)
{
    visited[node.first][node.second] = 1;
    cnt++;




    int x = node.first;
    int y = node.second;




    for (int i = 0; i < 4; i++)
    {
        int new_x = x + dx[i];
        int new_y = y + dy[i];




        pair<int, int> adj_node = {new_x, new_y};




        if (is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y] == 0)
        {
            dfs(adj_node);
        }
    }
}




int main()
{
    cin >> n >> m;




    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
            {
                grid[i][j] = -1;
            }
        }
    }




    int count_room = 0;
    int longest_room = 0;




    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 0 && visited[i][j] == 0)
            {
                cnt = 0;
                dfs({i, j});
                count_room++;
                longest_room = max(longest_room, cnt);
            }
        }
    }




    cout << "Rooms - " << count_room << '\n';
    cout << "Length of the longest room - " << longest_room << '\n';




    return 0;
}
