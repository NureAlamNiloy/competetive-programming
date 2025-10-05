/*


// Exam-------

===============5=========================
//problrm 5
#include <bits/stdc++.h>
using namespace std;

const int N = 1e4;
int maze[N][N],visited[N][N];
int n,m,roomSize,roomCount=0;
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
priority_queue<int> pq;

bool isInside(pair<int,int> room){
    int x = room.first;
    int y = room.second; 
    if(x>=0 && x<n && y>=0 && y<m) return true;
    return false;
}

pair<int,int> findUnvisited(){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(visited[i][j] == 0 && maze[i][j] == 0) return {i,j};       
        }
    }
    return {-1,-1};
}

void bfs(pair<int,int> src){
    roomCount++;
    roomSize = 1;
    queue<pair<int,int>> q;
    visited[src.first][src.second] = 1;
    q.push(src);

    while (!q.empty()){
        auto head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;
        for (int i = 0; i < 4; i++){
            int newX = x+dx[i];
            int newY = y+dy[i];
            pair<int,int> child = {newX,newY};
            if(isInside(child) && maze[newX][newY] == 0 && visited[newX][newY] == 0){
                visited[newX][newY] = 1;
                q.push(child);
                roomSize++;
            }
        }
        
    }
    pq.push(roomSize);
}

int main(){

    cin >> n >> m;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        for (int j = 0; j < m; j++){
            if(s[j] == '#') maze[i][j] = -1;
            else maze[i][j] = 0;
        }
    }

    while (true){
        auto unvisitedPos = findUnvisited(); 
        if(unvisitedPos == pair<int,int>(-1,-1))break;
        bfs(unvisitedPos);
    }
    
    cout << "Rooms - " << roomCount << endl;
    cout << "Length of the longest room - " << pq.top() << endl; 

    return 0;
}



















*/