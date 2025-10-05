

/*




===================================================================================

//Path printing and massage route cses problrm using bfs
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5;
int visited[N],level[N],parent[N];
vector<int> adjList[N];

void bfs(int src){
    queue<int>q;
    visited[src] = 1;
    level[src] = 1;
    parent[src] = -1;
    q.push(src);
    while (!q.empty()){
        int head = q.front();
        q.pop();
        for(int child : adjList[head]){
            if(visited[child] == 0){
                parent[child] = head;
                visited[child] = 1;
                level[child] = level[head]+1;
                q.push(child);
            }
        }
    }
    
}

int main(){
    int n,e,u,v;
    cin >> n >> e;
    for (int i = 1; i <= e; i++){
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int src = 1;
    bfs(src);

    int destNode =n, selectedNode = n;
    vector<int>path;
    if(visited[destNode] == 0)cout << "Impossible\n";
    else{
        cout << level[destNode] << endl;
        while (1){
            path.push_back(selectedNode);
            if(selectedNode == src) break;
            selectedNode = parent[selectedNode];
        } 
    }
    reverse(path.begin(),path.end());
    for (int i : path){
        cout << i << " ";
    }
    

    return 0;
}





*/