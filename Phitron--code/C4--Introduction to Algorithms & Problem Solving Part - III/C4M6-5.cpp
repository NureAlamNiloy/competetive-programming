










/*













1-------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
const int node = 5;
int visited[N];
int adjMatrix[node][node] ={};

void bfs(int src){
    queue<int> q;
    visited[src] =1;
    q.push(src);

    while (!q.empty()){
        int head = q.front();
        q.pop();
        cout << head << " ";
        for (int i = 0; i < node; i++){
            if (adjMatrix[head][i] == 1  && !visited[i]){
                visited[i] = 1;
                q.push(i);
            } 
            
        }
    } 
}

int main(){
    
    adjMatrix[0][1] = 1;
    adjMatrix[1][0] = 1; 
    adjMatrix[0][2] = 1; 
    adjMatrix[2][0] = 1; 
    adjMatrix[0][3] = 1; 
    adjMatrix[3][0] = 1; 
    adjMatrix[0][4] = 1; 
    adjMatrix[4][0] = 1; 

    bfs(0);
    
    
    return 0;
}







2------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
const int node = 5;
int visited[N];
int adjMatrix[node][node] ={};

void dfs(int head){
    cout << head << "  ";
    visited[head] = 1;
    for (int i = 0; i < node; i++){
        if (adjMatrix[head][i] == 1 && visited[i] == 0){
            dfs(i);
        }  
    } 
}

int main(){
    
    adjMatrix[0][1] = 1;
    adjMatrix[1][0] = 1; 
    adjMatrix[0][2] = 1; 
    adjMatrix[2][0] = 1; 
    adjMatrix[0][3] = 1; 
    adjMatrix[3][0] = 1; 
    adjMatrix[0][4] = 1; 
    adjMatrix[4][0] = 1; 

    dfs(1); 
    return 0;
}

5-------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];
vector<int>adj_list[N];
bool niloy = false;

void bfs(int x, int y){
    queue<int>q; 
    visited[x] = 1; 
    q.push(x);

    while (!q.empty()){
        int head = q.front();
        q.pop(); 
        if (head == y){
            niloy = true;
        } 
        for (int adj_node : adj_list[head]){
            if(visited[adj_node] == 0){
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }   
    }
    
    
}
int main() {

    int n, e;
    cin >> n >> e;

    for(int i = 0 ; i < e ; i++) { 
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    bfs(2,3);
    if (niloy) cout << " They ar connected \n"; 
    else cout <<  " They ar Not connected\n"; 
    
    return 0;
}

6-----------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];
vector<int>adj_list[N];
bool niloy = false;

void dfs(int x, int y){
    if (x==y) niloy = true; 
    visited[x] = 1;
    for (int adjNode: adj_list[x]){
        if (visited[adjNode] == 0){
            dfs(adjNode, y);
        } 
    } 
}

int main() {

    int n, e;
    cin >> n >> e;

    for(int i = 0 ; i < e ; i++) { 
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    dfs(0,2);
    if (niloy) cout << " They ar connected \n"; 
    else cout <<  " They ar Not connected\n"; 
    
    return 0;
}









*/