#include <bits/stdc++.h>
using namespace std;

const int N = 2e5;
int visited[N];
vector<int> adjLis[N];
int connected = 0;

void bfs(int src){
    connected ++;
    queue<int>q;
    visited[src] = 1;
    q.push(src);
    while (!q.empty()){
        int head = q.front();
        q.pop();
        for (int child: adjLis[head]){
            if(visited[child] == 0){
                visited[child] =1;
                q.push(child);
            }
        } 
    }
}


int main(){
    int n,m,u,v;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        adjLis[u].push_back(v);
        adjLis[v].push_back(u);
    }
    for (int i = 0; i < n; i++){
        if(visited[i] == 0){
            bfs(i);
        }
    }
    cout << connected << endl;
    return 0;
}