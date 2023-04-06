/*
Flood Fil 

https://cses.fi/problemset/task/1192s
Couting Room 

You are given a map of a building, and your task is to count the number of its rooms. The size of the map is n×m
 squares, and each square is either floor or wall. You can walk left, right, up, and down through the floor squares.

Input

The first input line has two integers n
 and m
: the height and width of the map.

Then there are n
 lines of m
 characters describing the map. Each character is either . (floor) or # (wall).

Output

Print one integer: the number of rooms.

Constraints
1≤n,m≤1000

Example

Input:
5 8
########
#..#...#
####.#.#
#..#...#
########

Output:
3

*/


/*
Input
5 8
########
#..#...#
####.#.#
#..#...#
########

Output-> 3
s
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 2002;

int maze[N][N], visited[N][N];


void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    visited[src.first][src.second] = 1;

    q.push(src);
    while (!q.empty())
    {
        pair<int, int> head = q.front();
        q.pop();

        int x = head.first;
        int y = head.second;
    }
}

pair<int, int>find_unvisited()
{
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
        {
            if(visited[i][j] == 0 && maze[i][j] == 0)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    int n, m;
    cin >> n >> m;

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
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << maze[i][j] << "\t";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n";

    while(true){
        pair<int, int>unvisited_pos = find_unvisited();
        if(unvisited_pos == pair<int, int>(-1, -1)){
            break; 
        }
        bfs(unvisited_pos);
        room_cnt++;
    }
    return 0;
}
