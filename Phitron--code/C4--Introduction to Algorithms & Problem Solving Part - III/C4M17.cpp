/*

//Bellman-Forcd path printing

n = number of node in graph
m = number of edge in graph
--Time Complexity = O(n*m) worest case ee er complexity O(n^3)
--Space Complexity = O(n)

Input-- A weighted graph & src node(with no neative cycle)
Output-- Shortest distance from src node to all others node


--- Create a distance array "d" with all value to infinity 
--- Create a parrent array
-- parent[src] = -1;
-- d[src] = 0;
-- negativeCycle =  false;
-- last_updated_Node = -2;

--for i = 1  to n-1:
    -for all edge "e":
        //relex the edge
        -if d[u]+w < d[v]
            parent[v] = u;
            d[v] = d[u] + w
            -if(i==n)
                --negativeCycle  = true;
                -- last_updated_Node = v;
-- distination_Node = n;
-- vector<int> path;

-- if(negativeCycle = false)
    -- print the distance array "d";
    -- SelectedNode = distination_Node;
    -- while(true) :
        -- path.push_back(selectedNode);
        -- if selectedNode == src then brack the loop
        -- selectedNode = parent[selectedNode]
    -- reverce(path.begain(),path.end());
    -- print the path

-- if(negativeCycle = true)
    -- print the cycle exist
    -- selectedNode = last_updated_Node;
    -- for i = 1 to n-1:
        -- selectedNode = parent[selectedNode]
    -- declear a vector "cycle"
     
    -- while(true) :
        -- cycle.push_back(selectedNode)
        -- if selectedNode == src then brack the loop
        -- selectedNode = parent[selectedNode]
    -- reverce(cycle.begain(),cycle.end());
    -- print the cycle

*/





#include <bits/stdc++.h>
using namespace std;

const int N = 2e5;
int d[N],parent[N]; 
int n,e,u,v,w, INF = 1e9;
vector<pair<int,int>> adjList[N];
bool negativeCycle = false;
int lastUpdaetNode = -2;

void bellmenFord(int src){

    d[src] = 0;
    for (int i = 1; i <= n ; i++){
        for (int node = 1; node <= n; node++){
            for(auto child : adjList[node]){
                int u = node;
                int v = child.first;
                int w = child.second;
                if(d[u]+w < d[v]){
                    parent[v] = u;
                    d[v] = d[u]+w ;
                    if(i== n){
                        negativeCycle = true;
                        lastUpdaetNode = v;
                    } 
                } 
            }
        }
        
    }
}

int main(){

    
    cin >> n >> e;
    for (int i = 0; i < e; i++){
        cin >> u >> v >> w;
        adjList[u].push_back({v,w});
    }
    for (int i = 1; i <= n; i++){
        d[i] = INF;
    }
    
    int src = 1;
    int dastinationNode = n;
    bellmenFord(src);
    if(negativeCycle){
        
        cout << "Negative Cycle Exsist on the graph\n";
        vector<int> cycle;
         int selectedNode = lastUpdaetNode;
        for (int i = 1; i < n; i++){
            selectedNode = parent[selectedNode];
        }
        cycle.push_back(selectedNode);
        while (true){ 
            selectedNode = parent[selectedNode];
            cycle.push_back(selectedNode);
            if (selectedNode == src)break;
        }
        reverse(cycle.begin(), cycle.end());
        for (int i = 0; i < cycle.size(); i++){ 
            cout << cycle[i] << " ";
        }
    } 
    else{ 
        cout << " NO Negative Cycle\n";
        vector<int> path;
        int selectedNode = dastinationNode;
        path.push_back(selectedNode);
        while (true){
            selectedNode = parent[selectedNode]; 
             path.push_back(selectedNode);
            if (selectedNode == src)break;
        }
        reverse(path.begin(), path.end());
        for (int i = 0; i < path.size(); i++){ 
            cout << path[i] << " ";
        }  
    } 
    return 0;
}