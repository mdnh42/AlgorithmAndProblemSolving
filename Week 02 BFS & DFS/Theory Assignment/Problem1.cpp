#include<bits/stdc++.h>
using namespace std;

// CPP program to convert Adjacency matrix
// representation to Adjacency List

// converts from adjacency matrix to adjacency list
vector<vector<int>> convert( vector<vector<int>> a)
{
	vector<vector<int>> adjList(a.size());
	for (int i = 0; i < a.size(); i++)
	{
		
		for (int j = 0; j < a[i].size(); j++)
		{
			if (a[i][j] != 0)
			{
				adjList[i].push_back(j);
			}
		}
	}
	return adjList;
}
	
// Driver code
int main()
{
	vector<vector<int>> a;
	vector<int> p({0, 0, 0, 0, 0, 0, 0});
	vector<int> q({0, 0, 1, 1, 0, 0, 0});
	vector<int> r({0, 1, 0, 0, 1, 0, 0}); // adjacency matrix
	vector<int> s({0, 1, 0, 0, 1, 0, 0}); // adjacency matrix
	vector<int> t({0, 0, 1, 1, 0, 1, 1}); // adjacency matrix
	vector<int> u({0, 0, 0, 0, 1, 0, 0}); // adjacency matrix
	vector<int> v({0, 0, 0, 0, 1, 0, 0}); // adjacency matrix
	a.push_back(p);
	a.push_back(q);
	a.push_back(r);
	a.push_back(s);
	a.push_back(t);
	a.push_back(u);
	a.push_back(v);
	vector<vector<int>> AdjList = convert(a);
	cout<<"Adjacency List:"<<endl;
	
	// print the adjacency list
	for (int i = 0; i < AdjList.size(); i++)
	{
		cout << i;
		for(int j = 0; j < AdjList[i].size(); j++)
		{
			if(j == AdjList[i].size() - 1)
			{
				cout << " -> " << AdjList[i][j] << endl;
				break;
			}
			else
				cout << " -> " << AdjList[i][j];
		}
	}
}

// This code is contributed by Surendra_Gangwar
// This code is modified by Susobhan Akhuli
