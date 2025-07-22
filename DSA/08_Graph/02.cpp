#include<iostream>
using namespace std;

// how to create a Graph with matrix
class Graph{
    public:
//  map(key,values)
    unordered_map<int, list<int>> adj;
//  function addEdge(starting node ,ending node,for direction)
    void addEdge(int u , int v,bool direction){
        //direction - 0->undirected
        //directed - 1 -> directed
        adj[u].push_back(v);//this will add node v into the adjencylist of u
        if(direction == 0){//means undirected graph
            adj[v].push_back(u);//u also added into the adjecyList of v
    }

    void print(){
        for(auto i:adj){//auto ->automatically detect datatype of i
            cout<<i.first<<" -> ";// means going on keys  
            for(auto j:i.second){//iterate on values 
                cout<<j<<" ";
        }cout<<endl;
    }
}
};

int main(){
    int n;
    cout<<"\Enter the number of nodes :";
    cin>>n;

    int m;
    cout<<"\Enter the number of edges :";
    cin>>m;
    Graph g;//declaring object of graph class to access member function like addedge,print
    for(int i=0;i<m;i++){
        int u,v;//declaring variable which will store end points of edge
        cin>>u>>v;//1,2->1--2
        g.addEdge(u,v,0);//passing 0 means it is undirected->1--2, 2--1
    }
    g.print();print adj list-showing each node and which nodes it is connected to.
}

//BFS
// properties BFS
//go to all adjecent node of source node
//mark them as visited
//go to all unvisited adjacent node of all visited node
//mark them as visited
class Solution{
    public:
    //function to return breath first traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj){
        int v = adj.size();
        vector <int> bfsResult;
        vector<bool> visited(v,false);
        queue<int> q;

        //start bfd from node 0;
        q.push(0);
        visited[0] = true;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfsResult.push_back(node);

            //visit all unvisited neighbours
            for(int neighbour : adj[node]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour] = true;
    }
}
}
return bfsResult;
    }
};

//DFS(depth first search)
//properties of DFS
//start from source node
//visit all adjacent node of source node
//visit all adjacent node of all visited node

class solution

//visit all the unvisited nodes
for(int neighbour : adj[node]){
    if(!visited[neighbour]){
        dfsHelper(neighbour,visited,adj,result);
    }
}
}
vector<int> dfs(vector<vector<int>>& adj){
    int v = adj.size();
    vector<bool> visited(v,false);
    vector<int> result;
    dfsHelper(0,visited,adj,result);
    return result;
}
};