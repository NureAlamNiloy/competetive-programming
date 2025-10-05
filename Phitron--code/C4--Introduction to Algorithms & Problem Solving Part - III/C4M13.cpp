/*
Dijkstra Algorithm or sortest path on weighted graph
 input -> a weighted graph and a sorce
 output -> distance all nodes from the source

 -- Creat a distance array "d" and initialize all values of d to infinity
 -- distance[src] = 0
 -- creat a visited array and mark all nodes as unvisited
 -- for i = 0 to n:
        - pick the unvisited and minimum distance node - distance[node]
        - visited[node] = 1
        - for all adj_node of node:
            if distance[node] + cost(node,adj_node) < distance[adj_node] then,
                - distance[adj_node] =  distance[node] + cost(node,adj_node)

-- output array d 

 

*/






#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
const int long long infinity = 1e18;
int visited[N], d[N]; 
int node, edge;
vector<pair<int,int>> adjList[N];

void dijkstra(int src){
    for (int i = 0; i < node; i++) d[i] = infinity; 
    d[src] = 0;
    for (int i = 0; i < node; i++){
        int seletedNode = -1;
        for ( int j = 1; j <= node; j++){
            if(visited[j] == 1) continue;
            if(seletedNode == -1 || d[seletedNode] > d[j]){
                seletedNode = j;
              
            }
        }
        visited[seletedNode] = 1;
        for (auto adjEntry:  adjList[seletedNode]){
            int ajdNode = adjEntry.first;
            int edgeCost = adjEntry.second;
            if(d[seletedNode] + edgeCost < d[ajdNode]) d[ajdNode] = d[seletedNode] + edgeCost; 
        }
        
    }
    

}

int main(){

    int u,v,w;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++){
        cin >> u >> v >> w;
        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w});
    }

    int src = 1;
    dijkstra(src);
    
    for (int i = 0; i < node; i++){
        cout <<" distanc of " << i << "from" << src << "is = " << d[i] << endl;
    } 
    return 0;
}