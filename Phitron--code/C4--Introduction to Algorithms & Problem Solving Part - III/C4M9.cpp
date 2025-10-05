
// CSES-- Building Teams

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int visited[N],color[N];
vector<int> adjList[N];

bool dfs(int src){
    visited[src] =1;
    for (int child : adjList[src]){
        if(visited[child] == 0){
            //assign different colour to child node
            if(color[src] == 1) color[child] = 2;
            else color[child] = 1;
            bool is_bicolorable = dfs(child);
            if(!is_bicolorable) return false;
        }
        else{
            if(color[src] == color[child]) return false;
        }
    }
    return true;
}

int main(){ 
    int n,m, a,b;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    bool is_bicolorable = true;
    for (int i = 1; i <= n; i++){
        if(visited[i] == 0){
            color[i] = 1;
            bool ok = dfs(i);
            if(!ok){
                is_bicolorable = false;
                break;
            }
        }
    }
    if(!is_bicolorable) cout << "Group Impossible\n";
    else{
        for (int i = 1; i <= n; i++){
            cout << color[i] << " ";
        }
    }
   return 0;
}




/*


// CSES-- Building Teams

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int visited[N],color[N];
vector<int> adjList[N];

bool dfs(int src){
    visited[src] =1;
    for (int child : adjList[src]){
        if(visited[child] == 0){
            //assign different colour to child node
            if(color[src] == 1) color[child] = 2;
            else color[child] = 1;
            bool is_bicolorable = dfs(child);
            if(!is_bicolorable) return false;
        }
        else{
            if(color[src] == color[child]) return false;
        }
    }
    return true;
}

int main(){ 
    int n,m, a,b;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    bool is_bicolorable = true;
    for (int i = 1; i <= n; i++){
        if(visited[i] == 0){
            color[i] = 1;
            bool ok = dfs(i);
            if(!ok){
                is_bicolorable = false;
                break;
            }
        }
    }
    if(!is_bicolorable) cout << "Group Impossible\n";
    else{
        for (int i = 1; i <= n; i++){
            cout << color[i] << " ";
        }
    }
   return 0;
}




========================================================================================
5 8
########
#..#...#
####.#.#
#......#
########


// Flood fild
#include <bits/stdc++.h>
using namespace std;
const int N = 2002;
int n,m;
int maze[N][N], visited[N][N];
int roomCount = 0;

int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0,};
bool is_inside(pair<int,int> coord){
    int x = coord.first;
    int y = coord.second;
    if (x >= 0 && x < n && y>=0  && y<m) return true; 
    return false;
}
bool is_safe(pair<int,int> coord){
    int x = coord.first;
    int y = coord.second;
    if (maze[x][y] == -1) return false; 
    return true;
}


void bfs(pair<int,int> src){
    roomCount++;
    queue <pair<int,int>> q;
    visited[src.first][src.second] == 1;
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
                q.push(adjNode);
            }
        }
    } 
}

pair<int, int> find_unvisited(){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(visited[i][j] == 0  && maze[i][j] == 0){
                return {i,j};
            }
        } 
    }
    return {-1, -1};
}

int main(){ 
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        for (int j = 0; j < m; j++){
            if(s[j] == '#') maze[i][j] = -1;
            else if(s[j] == '.') maze[i][j] = 0;
        } 
    }
    while (true){
        pair<int,int> unvisitedCell = find_unvisited();
        if(unvisitedCell == pair<int,int>(-1,-1)){
            break;
        }
        bfs(unvisitedCell);
    }

    cout << roomCount << endl;
    return 0;
}


*/