#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];  
vector<int>adj_list[N];

void bfs(int src){  
    queue<int> q;
    visited[src] = 1;
    q.push(src);

    while (!q.empty()){
        int head = q.front(); 
        q.pop();
        cout << head << "   ";

        for ( int adjNode : adj_list[head]){
            if (visited[adjNode] == 0){
                visited[adjNode] = 1;
                q.push(adjNode);
            }
            
        } 
    } 
}


int main(){ 
    
    int node, edge;
    cin >> node >> edge; 
    for (int i = 0; i < edge; i++){
        int u,v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }   
    cout << endl << endl;
    bfs(0);
    return 0;
}
























/*

//BFS Code
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];  
vector<int>adj_list[N];

void bfs(int src){  
    queue<int> q;
    visited[src] = 1;
    q.push(src);

    while (!q.empty()){
        int head = q.front(); 
        q.pop();
        cout << head << "   ";

        for ( int adjNode : adj_list[head]){
            if (visited[adjNode] == 0){
                visited[adjNode] = 1;
                q.push(adjNode);
            }
            
        } 
    } 
}


int main(){ 
    
    int node, edge;
    cin >> node >> edge; 
    for (int i = 0; i < edge; i++){
        int u,v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }   
    cout << endl << endl;
    bfs(0);
    return 0;
}


===================================================================


//DFS Code-------------------------
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];  
vector<int>adj_list[N];

void dfs(int node){  
    cout << node << "  ";
    visited[node] = 1;
    for (int adjNode: adj_list[node]){
        if (visited[adjNode] == 0){
            dfs(adjNode);
        } 
    } 
}

int main(){ 
    
    int node, edge;
    cin >> node >> edge;
    
    for (int i = 0; i < edge; i++){
        int u,v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    } 
    dfs(0);
    
    return 0;
}




=============================================================


// DFS Phodocode--- 
time complexity O(V+E)
Space complexity O(V)
void dfs(int node){ // binary tree
    cout << node << endl
    // base case
    if node dosnot have any child node then return;

    // genarel case
    dfs(node.left_child);
    dfs(node.right_child);
}
void dfs(int node){ // genarel tree
    cout << node << endl
    // base case
    if node dosnot have any child node then return;

    // genarel case
    for all clides node
    dfs(child);
}
void dfs(int node){ // for graph
    cout << node << endl
     visited[node] = 1;
    for all adjacence node
        if visited[adj_node]==0
            dfs(adj_node);
}





====================================================================


// Recursion fibonacci series
#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
    //base case 
    if( n<=1) return n;
    // genarel case
    return fibo(n-1)+fibo(n-2);  
}

int main(){ 
    int n;
    cin >> n; 
    for (int i = 0; i < n; i++){
        cout << fibo(i) << " "; 
    }
    return 0;
}






*/