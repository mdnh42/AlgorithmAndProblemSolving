/*
Topic: adjacency Matrix 
0-----1
    /   \
    2---3

Total Nodes 4 
Total Edge = 4 
Undirected and Unwighted 

Matrix of Node x of Nodes 
 - 4 x 4 

 Matrix[i][j] = 1
    if and only f (i->j)


0 - 1
1 - 0
1 - 2
2 - 1
1 - 3
3 - 1
2 - 3 
3 - 2

0 1 0 0 
1 0 1 1
0 1 0 1
0 1 1 0
*/
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int nodes = 4; // O(1)
    int matrix[nodes][nodes] = {}; // O(n^2)
    // O(E) -> Number of Edge
    // E ->> n^2
    matrix[0][1] = 1; 
    matrix[1][0] = 1; 
    matrix[1][2] = 1; 
    matrix[2][1] = 1; 
    matrix[2][3] = 1; 
    matrix[3][2] = 1; 
    matrix[1][3] = 1; 
    matrix[3][1] = 1; 
    
    // O(n^2)
    for(int i=0; i<nodes; i++)
    {
        for(int j = 0; j<nodes; j++)
        {
            cout<<matrix[i][j]<<" "; 
        }
        cout<<"\n";
    }

}