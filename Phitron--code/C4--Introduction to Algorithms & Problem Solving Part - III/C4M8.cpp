
// Grid Traversal problem
#include <bits/stdc++.h>
using namespace std;
const int N = 2002;
int n,m;
int maze[N][N], visited[N][N], level[N][N];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0,};

bool is_inside(pair<int,int> coord){
    int x = coord.first;
    int y = coord.second;
    if (x >= 0 && x < n && y>=0  && y<m){
        return true;
    }
    return false;
}
bool is_safe(pair<int,int> coord){
    int x = coord.first;
    int y = coord.second;
    if (maze[x][y] == -1){
        return false;
    }
    return true;
}

void bfs(pair<int,int> src){
    queue<pair<int,int>> q;
    visited[src.first][src.second] = 1;
    level[src.first][src.second] = 0;
    q.push(src);

    while (!q.empty()){
        pair<int,int> head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;
        for (int i = 0; i < 4; i++){
            int newX = x + dx[i];
            int newY = y + dy[i];
            pair<int,int> adjNode = {newX,newY};
            if(is_inside(adjNode) && is_safe(adjNode) && visited[newX][newY] == 0){
                visited[newX][newY] = 1;
                level[newX][newY] = level[x][y]+1;
                q.push(adjNode);
            }
        }
        
    } 
}


int main(){

    
    cin >> n >> m;
    pair <int, int> src,dst;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            level[i][j] = -1;
        }
    }
    
    for (int i = 0; i < n; i++){
        string input;
        cin >> input;
        for (int j = 0; j < m; j++){
            if(input[j] == '#') maze[i][j] = -1;
            else if(input[j] == 'A') src = {i,j};
            else if(input[j] == 'B') dst = {i,j};
        }
    }

    bfs(src); 
    if(level[dst.first][dst.second] == -1) cout << "NO\n";
    else  cout << "Yes\n" << level[dst.first][dst.second] << endl;    
  
    return 0;
}



/*


// Grid Traversal problem
#include <bits/stdc++.h>
using namespace std;
const int N = 2002;
int n,m;
int maze[N][N], visited[N][N], level[N][N];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0,};

bool is_inside(pair<int,int> coord){
    int x = coord.first;
    int y = coord.second;
    if (x >= 0 && x < n && y>=0  && y<m){
        return true;
    }
    return false;
}
bool is_safe(pair<int,int> coord){
    int x = coord.first;
    int y = coord.second;
    if (maze[x][y] == -1){
        return false;
    }
    return true;
}

void bfs(pair<int,int> src){
    queue<pair<int,int>> q;
    visited[src.first][src.second] = 1;
    level[src.first][src.second] = 0;
    q.push(src);

    while (!q.empty()){
        pair<int,int> head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;
        for (int i = 0; i < 4; i++){
            int newX = x + dx[i];
            int newY = y + dy[i];
            pair<int,int> adjNode = {newX,newY};
            if(is_inside(adjNode) && is_safe(adjNode) && visited[newX][newY] == 0){
                visited[newX][newY] = 1;
                level[newX][newY] = level[x][y]+1;
                q.push(adjNode);
            }
        }
        
    } 
}


int main(){

    
    cin >> n >> m;
    pair <int, int> src,dst;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            level[i][j] = -1;
        }
    }
    
    for (int i = 0; i < n; i++){
        string input;
        cin >> input;
        for (int j = 0; j < m; j++){
            if(input[j] == '#') maze[i][j] = -1;
            else if(input[j] == 'A') src = {i,j};
            else if(input[j] == 'B') dst = {i,j};
        }
    }

    bfs(src); 
    if(level[dst.first][dst.second] == -1) cout << "NO\n";
    else  cout << "Yes\n" << level[dst.first][dst.second] << endl;    
  
    return 0;
}

5 8
########
#.A#...#
#.##.#B#
#......#
########




============================================================================



// Short path problem
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
bool visited[N];
int level[N];
vector<int> adjList[N];

void bfs(int src){
    queue<int>q;
    visited[src] = true;
    level[src] = 0;
    q.push(src);

    while (!q.empty()){
        int head = q.front();
         q.pop();
        cout << head << " ";
       
        for (int child : adjList[head]){
            if(!visited[child]){
                visited[child] = true;
                q.push(child);
                level[child] = level[head]+1; 
            }
        } 
    }
}

int main(){

    int node,edge;
    cin >> node >> edge;

    for (int i = 0; i < edge; i++){
        int u,v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    } 
    bfs(0);

    for (int i = 0; i < node; i++){
        cout << "Node = " << i << " -> level = " << level[i] << endl;
    }
    return 0;
}



*/