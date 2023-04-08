# Week 01 Introduction to Graph Algorithm
# Module: 01 Introduction to Algorithm and Graph Theory 
## What is Algorithm? 
A process or set of rules to be followed in calculations or other problem-solving operations, especially by a computer.

## Introduction to Graphs: Node and Edge
   What is Graph?
   Graph algorithms are a set of instructions that traverse (visits nodes of a) graph. Some algorithms are used to find a specific node or the path between two given nodes.
![](https://media.geeksforgeeks.org/wp-content/uploads/20200630111809/graph18.jpg)

    NODE + EDGE = GRAPH 

    Components of a Graph
        Vertices/Nodes: Vertices are the fundamental units of the graph. Sometimes, vertices are also known as vertex or nodes. Every node/vertex can be labeled or unlabelled.   


   
    Edges: Edges are drawn or used to connect two nodes of the graph. It can be ordered pair of nodes in a directed graph. Edges can connect any two nodes in any possible way. There are no rules. Sometimes, edges are also known as arcs. Every edge can be labeled/unlabelled.
       

    Variations of Graph
        = Unwighted Graph
            An unweighted graph is a graph in which the edges do not have weights or costs associated with them. Instead, they simply represent the presence of a connection between two vertices.

    ![]()

        = Weighted Graph (Google Search)
            
        = Directed Graph (Google Search)


        = Undirected Graph (Google Search)

        = Bipartitc Graph
        A graph G = (V, E) is said to be a bipartite graph if its vertex set V(G) can be partitioned into two non-empty disjoint subsets. V1(G) and V2(G) in such a way that each edge e of E(G) has one end in V1(G) and another end in V2(G). The partition V1 U V2 = V is called Bipartite of G. Here in the figure: V1(G)={V5, V4, V3} and V2(G)={V1, V2} 

        ![](https://media.geeksforgeeks.org/wp-content/uploads/bipartite.png)

        = Complete Graph
            A simple graph with n vertices is called a complete graph if the degree of each vertex is n-1, that is, one vertex is attached with n-1 edges or the rest of the vertices in the graph. A complete graph is also called Full Graph. 
        ![] (https://media.geeksforgeeks.org/wp-content/uploads/complete1.png)

        = Tree Graph
        {No Cycle}
        {Path onece visited}
        {Connected}
        {Only One Path}
        {No have Multi edge}

        = Tree Variations 
            - Rooted Tree
            - Unrooted Tree

        = DAG
            - Directed Acyclic Graph

        = Multi Edge


        = Self Loop



# Module 02: Graph Representation.

    - Adjacency Matrix
    
    - Adjacency List 

    - Edge List 

    - Time Complexty Recape 


# Lab Class 
## Space Complexity 




## Adjancency Matrix 
    - Time Complexity O(n^2)
    - Space Complexity O(n^2)


## Adjacency List 
    - Time Complexity O()


## Edge List 


# Week 02 BFS and DFS 
## Module: 04 BFS 

    - Intro Searching in Graph. (BFS and DFS)
        - Non-Linear Data Traversal Way

    - Queue (FIFO Format) all Operation Time Complexity: O(1) and Space SC = O(n)
        - Push(x), Pop and Front Operation
        - First In First Out.

    - BFS Simulation - Level Wise(Order) Traversal.
        - Target -> Visit all nodes in a graph. 
        - Output the order that nodes are visited. 

        - Step Using Queue 
            - Select a Node
            - Explore a node (visit all adj nodes)
            - Visualaization 

    - Pseudocode of BFS (Graph)
        - Input -> Connected Graph and a Source 
        - Output -> Traverse all node and print the traversal Order 
            BFS (Graph, Source):
            - Initiate an Array Called "Visited" and an empty queue "q"
            - Mark visited[Source] = 1 and q.push(source)
            - While the queue is not empty: 
                - Head = q.front()
                - q.pop()

                - print the node "head"
                - for all adjacent nodes of "head"
                    - if(visited[adj_node] == 0)
                        - Visited[adj_node] = 1 and q.push(adj_node)

    - BFS(Graph) Time Complexity and Space Complexity: 
        - Visited Array and Emtpy Queue Time Complexty: O(1)
        - Mark Visited Array and Q.Push Time Complexity: O(1)
        - While Loop is not Empty: Time Complexity: O(V)
        - for all adjacent nodes of "head" Time COmplexity: O(2E) Or O(E)

    - BFS(GRAPH) Space Complexity: O(V)


## Module 05: DFS
    Basic Simulation: 
    
    DFS - Depth First Search 
        Step-> 
            1. Select a node. 
            2. Explorer a node. 
    
        Approach: 
        1. Select a Node.
        2. Explorer 
        3. If give a node pause the current node and so on
    
    Difference with BFS: 
        - BFS Level Wise Visited. 
        - DFS Depth Wise Visited. 


    Most Popular Topic: 
    RECURSION: Function calls it self. 
        Recursion 3 Step solved your any Problem: 
            1. Can we solve the smallest problem? 
            2. Can we solve the larger problem given the smaller problem is already solved? 
            3. Generalize the relation into an formula. 

    Think: Calculate the sum of all positive numbers from 1 To N; 
    Think: Check whether a String is Palindrome
            Example: Level [Reverse Way: level] = Palindrom 

    General Code: 
        1. Take string 
        2. Size and Left and Right 
        3. while (left<right)
            4. if(string[l] != str[r])
                return false; 
            5. l++ and r++
        return True; 

    Think: Using Recursion. 
        Hints:  Base Case NULL String
                Single String.
                Return Function 




## Module 06 Lab Class 
    Fibonacci Using Recursion: 

    
    DFS Pseudocode on Tree: 
        void dfs(int node)
        {
            cout<<node<<"\n";
            //base case 
            if node does not have any child: 
                return 

            // General Case
            [for all childs of node: dfs(child)]
            dfs(node.left_child)
            dfs(node.righ_child)

        }

    
    DFS Pseudocode and Complexity
    // Graph 
    // Visited Array 
    void dfs(int node)
    {
        cout<<node<<"\n"; 
        visited[node] = 1; 
        for all adj_node of node: 
        if visited[adj_node] == 0; 
            dfs(adj_node)
    }
    


    

# Week 03 BFS and DFS Problem Solving 
## Module - 08 Problem Solving with BFS and DFS 
    Introduction: 
        - Single Source Shortest Path 
        - Grid Traversal with BFS 

    Single Source Shortest Path (SSSP): 
        [Rememer BFS Level Wise Visited and DFS Depth Wise Vistied]



    SSSP CODE Using BFS:

    GRID Traversal: 
        

## Module 09 PS using BFS and DFS
    - Flood Fil Problem 
    - Graph Coloring Problem 
        -

## Lab Class 
    - Cycle Detection in Directed Graph 
    - Topogical Sorting 




# Week 04 Path Printing & Dijkstra 
## Module 12 Introduction to Path Printing 
    - Path Printing 
    
    - Shortest Path on a weighted Graph 
      Example about weighted Graph Path Finding.

## Module 13 Dijkstra 
    - Dijkstra Simulation 



    - Dijkstra Pseudocode & Complexity 
        Space Complexity: O(n) + o(n) + o(1) = O(n)
        TIme Complexity: o(n^2) + o(m) = O(n^2) 
        
        // if = d[u] + c(u, v) < d[v]
                d[v] = d[u] + c(u,v)

        - Input -> Weighted Graph and a Source 
        - Output -> distance of all nodes from the source 
        
        - Create a distance array "d"  // O(n)
        - Initialize all values of "d" to infinity 
        - d[src] = 0;
        - Create a visited array and mark all nodes as unvisited  // O(n)
        

        - for i = 0 to  n - 1: // o(1), o(n) === O(n^2)
            - pick the "unvisited"node with minimum node d[node]
            - visited[node] = 1
            - for all adj_node of node: 
                - if d[nodes] + c(node, adj_node) < d[adj_node]
                    = d[adj_node] = d[node] + c(node, adj_node)

        - output array "d"


    - Dijkstra Code 


## Module Lab Class 
    - Prioriy Queue


    - Optimized - Dijkstra Pseudocode and Complexity 

    - Dijkstra Pseudocode & Complexity 
        Space Complexity: O(n) + o(n) + o(1) = O(n)
        TIme Complexity: o(n^2) + o(m) = O(n^2) 
        
        // if = d[u] + c(u, v) < d[v]
                d[v] = d[u] + c(u,v)

        - Input -> Weighted Graph and a Source 
        - Output -> distance of all nodes from the source 
        
        - Create a distance array "d"  // O(n)
        - Initialize all values of "d" to infinity 
        - d[src] = 0;
        - Create a visited array and mark all nodes as unvisited  // O(n)
        - Take an reverse empty priority_queue "PQ" 
        - pq.push({0, src})
        

        - for i = 0 to  n - 1: // o(1), o(n) === O(n^2)
            - pick the node with minmum distance value =>
            - pick the "unvisited"node with minimum node d[node]
            - visited[node] = 1
            - for all adj_node of node: 
                - if d[nodes] + c(node, adj_node) < d[adj_node]
                    = d[adj_node] = d[node] + c(node, adj_node)
                    - pq.push({d[adj_node], adj_node});


        - output array "d"

    - Problem Solving 
    


## Week 05 RECAP Week 



# Week 06 Ballman Ford & Floyd-warshall Algorithm 
## Module 16 - Introduction to bellman-ford Algorithm 
    - Dijkstra's Limitations 


    - Bellman Ford-Algo's Intuition & simulation 


    - Bellman Ford Pesudocode 
        Input - > a weighted graph & src node (With no negative cycles)
        Output -> shortest distance from src node to all other nodes. 
        /*
            d[u] + c(u, v) <[v]
            => d[v] = d[u] + c(u, v)
        */
        Create a distance array "d" with all values to infinity 
        - d[src] = 0; 

        for( i = 1 to n-1: )
        {
            for all edges "e": 
                // Relax  e 
                if(d[u] + w<d[v])
                    d[v] = d[u] + w; 
        }

        - print the distance array "d" 

    - Bellman Ford Time Complexity 
        - o(n)  
        - o(m)
        = O(n*m) or o(|v| * |E|)

        = m = n^2 | n^3



    - Bellman Ford Negative Cycle Detection: 
        Input - > a weighted graph & src node (With no negative cycles)
        Output -> shortest distance from src node to all other nodes. 
        /*
            d[u] + c(u, v) <[v]
            => d[v] = d[u] + c(u, v)
        */
        Create a distance array "d" with all values to infinity 
        - d[src] = 0; 
        negetive_cyle = false
        for( i = 1 to n-1: )
        {
            for all edges "e": 
                // Relax  e 
                if(d[u] + w<d[v])
                    d[v] = d[u] + w; 
                    if i == n: 
                        negetive_cyle = true; 
        }
        - Print whether negative cycle exists 
        - print the distance array "d" 
