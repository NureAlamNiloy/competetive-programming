/*

//Bellman-Forcd

n = number of node in graph
m = number of edge in graph
--Time Complexity = O(n*m) worest case ee er complexity O(n^3)
--Space Complexity = O(n)

Input-- A weighted graph & src node(with no neative cycle)
Output-- Shortest distance from src node to all others node


--- Create a distance array "d" with all value to infinity
-- d[src] = 0;

--for i = 1  to n-1:
    -for all edge "e":
        //relex the edge
        -if d[u]+w < d[v]
            d[v] = d[u] + w


-- print the distance array "d";


*/

#include <bits/stdc++.h>
using namespace std;

const int N = 2e5;
int viseted[N],d[N];
int INF = 2e9;

vector<pair<int,int>> adjList[N];

void bellmentFord(int src){



}

int main(){

    int n,m,u,v,w;
    bool negativeCycle = false;
    cin >> n >> m;
    for (int i = 1; i < n; i++){
        d[i] = INF;
    }
    
    for (int i = 0; i < m; i++){
        cin >> u >> v >> w;
        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w});
    }

    int src = 1;
    d[src] = 0;

    for (int i = 1; i <= n; i++){
        for (auto node = 1; node <= n; node++){
            for (auto child: adjList[node]){
                int u = node;
                int v = child.first;
                int w = child.second;
                if(d[u]+w < d[v]){
                    d[v] = d[u] + w;
                    if(i == n) negativeCycle = true;
                }
            }
            
        }
        
    }

    if(negativeCycle){
        cout << "Negative Cycle Exsist on the graph";
        return 0;
    }

    for (int i = 0; i <= n; i++){
        cout << d[i] << " ";
    }

    return 0;
}









