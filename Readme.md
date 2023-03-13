# Week 01 Introduction to Graph Algorithm
# Module: 01 Introduction to Algorithm and Graph Theory 
## What is Algorithm? 
a process or set of rules to be followed in calculations or other problem-solving operations, especially by a computer.

## Introduction to Graphs: Node and Edge
   What is Graph?
   Graph algorithms are a set of instructions that traverse (visits nodes of a) graph. Some algorithms are used to find a specific node or the path between two given nodes.
![](https://media.geeksforgeeks.org/wp-content/uploads/20200630111809/graph18.jpg)


    Components of a Graph
        Vertices/Nodes: Vertices are the fundamental units of the graph. Sometimes, vertices are also known as vertex or nodes. Every node/vertex can be labeled or unlabelled.   
   
    Edges: Edges are drawn or used to connect two nodes of the graph. It can be ordered pair of nodes in a directed graph. Edges can connect any two nodes in any possible way. There are no rules. Sometimes, edges are also known as arcs. Every edge can be labeled/unlabelled.
       

    Variations of Graph
        = Unwighted Graph
            An unweighted graph is a graph in which the edges do not have weights or costs associated with them. Instead, they simply represent the presence of a connection between two vertices.

    ![]()

        = Weighted Graph

        = Directed Graph


        = Undirected Graph

        = Bipartitc Graph
        A graph G = (V, E) is said to be a bipartite graph if its vertex set V(G) can be partitioned into two non-empty disjoint subsets. V1(G) and V2(G) in such a way that each edge e of E(G) has one end in V1(G) and another end in V2(G). The partition V1 U V2 = V is called Bipartite of G. Here in the figure: V1(G)={V5, V4, V3} and V2(G)={V1, V2} 

        ![](https://media.geeksforgeeks.org/wp-content/uploads/bipartite.png)

        = Complete Graph
            A simple graph with n vertices is called a complete graph if the degree of each vertex is n-1, that is, one vertex is attached with n-1 edges or the rest of the vertices in the graph. A complete graph is also called Full Graph. 
        ![] (https://media.geeksforgeeks.org/wp-content/uploads/complete1.png)

        = Tree Graph
        {No Cycle}
        {Path onece visited}

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
    
    


    