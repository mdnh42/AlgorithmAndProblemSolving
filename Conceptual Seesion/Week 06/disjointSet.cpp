#include<bits/stdc++.h>
using namespace std; 

vector<pair<int, int>> edgeList; 
vector<int>parent; 

  

int find_parent(int x){
    if(parent[x] == -1){
        return x; 
    }
    return find_parent(parent[x]);
}


void union_operation(int a, int b){
    int parentA = find_parent(a);
    int paremtN = find_parent(b);
}
 
int main()
{
    int n, e; 
    cin>>n>>e; 
    parent.resize(n, -1);

    while(e--){
        int a, b; 
        cin>>a>>b; 
        edgeList.push_back({a, b});
    }
    bool cycle = true; 
    for(int i = 0; i<(int)edgeList.size(); i++){
        pair<int, int>pr = edgeList[i];
        int a = pr.first;
        int b = pr.second; 
        int parentA = find_parent(a); 
        int parentB = find_parent(b); 

        if(parentA == parentB){
            cycle = true; 
            break; 
        }
        else{
            union_operation(a, b);
        }

    }
    if(cycle == true){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
 

    return 0;
}


/*
4 4 
2 3
0 1 
0 2
1 2

*/