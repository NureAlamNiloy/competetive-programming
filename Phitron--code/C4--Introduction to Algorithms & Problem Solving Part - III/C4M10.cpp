//cycle thakle toptlogical ordar possibale naa.. Acyclick graph hole possible hove
//Undirected graph ee toptlogical ordar possibale naa.. Directed graph hole possible hove

#include <bits/stdc++.h>
using namespace std;

const int N = 2e6;
vector<int> adjList[N];
int visited[N];
stack<int>st;

void dfs(int node){
    visited[node] = 1;
    for (int child : adjList[node]){
        if(visited[child] == 0){
            dfs(child);
        }
    }
    st.push(node);
}

int main(){

  int n,m;
  cin >> n >> m;
  for (int i = 0; i < m; i++){
    int u,v;
    cin >> u >> v;
    adjList[u].push_back(v);
  }
  for (int i = 1; i <= n; i++){
    if(visited[i] ==0){
        dfs(i);
    }
  }

  while (!st.empty()){
        cout << st.top() << " ";
        st.pop();
  }

}























/*




============================================================================================
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5;
int visited[N];
vector<int> adjList[N];

bool dfs(int src){
    visited[src] = 1;
    for (int child : adjList[src]){
        if(visited[child] == 0){
           bool cycle =  dfs(child);
           if(cycle) return true;
        }
        else if (visited[child] == 1){
            return true;
        }
    }
    visited[src] = 2;
    return false;
}

int main(){
    int n,m,u,v;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        adjList[u].push_back(v);
    }
    bool gotCycle = false;
    for (int i = 1; i <= n ; i++){
        if(visited[i] == 0) {
            gotCycle = dfs(i);
            if(gotCycle) break;
        }
    }
    if(gotCycle) cout << "Cycle Exists";
    else cout << "No Cycle";  
}





*/
