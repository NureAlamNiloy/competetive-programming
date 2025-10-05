#include <bits/stdc++.h>
using namespace std;

int main(){


    return 0;

}




/*

10 8
1 2
1 3
2 4
3 4
3 6
4 6
6 7
6 8
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];
vector<int>adj_list[N];

void bfs(int src){
    queue<int>q;
    visited[src] = 1;
     cout << src << " "; 
    q.push(src);

    while (!q.empty()){
        int head = q.front();   
        q.pop(); 
        for (int i : adj_list[head]){
            if (visited[i] == 0){
                visited[i] = 1;
                q.push(i);
                cout << i << " ";
            }
        }  
    } 
}

int main(){

    int n,e,u,v;
    cin >> n >> e;
    

    for (int i = 1; i <= e; i++){
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u); 
    }
    bfs(1);
    return 0;
}


*/