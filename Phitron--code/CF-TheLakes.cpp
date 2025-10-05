// https://codeforces.com/contest/1829/problem/E 

#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int arr[N][N];
int n,m;
bool visited[N][N];
int ax[] = {0, 0, 1, -1};
int ay[] = {1, -1, 0, 0};

bool isValid(int x, int y){
    return (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] > 0 && !visited[x][y]);
}

int dfs(int x, int y){
    visited[x][y] = true;
    int val = arr[x][y];
    for (int i = 0; i < 4; i++) {
        int nx = x + ax[i], ny = y + ay[i];
        if (isValid(nx, ny)) val += dfs(nx, ny); 
    }
    return val;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        memset(visited, false, sizeof(visited)); 
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) cin >> arr[i][j]; 
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] > 0 && !visited[i][j]) ans = max(ans, dfs(i, j));
            }
        }
        cout << ans << "\n";
    }
    return 0;
}