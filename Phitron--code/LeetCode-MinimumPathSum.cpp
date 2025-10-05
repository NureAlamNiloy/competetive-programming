#include <bits/stdc++.h>
using namespace std;

const int N = 105;
int dp[N][N],grid[N][N],row,col; 
int MinPathSum(int n, int m){
    if(n==0 && m==0) return grid[0][0];
    if(dp[n][m] != -1) return dp[n][m];
    int ans1,ans2;
    ans1 = MinPathSum(n-1, m)+ grid[n][m];
    ans2 = MinPathSum(n, m-1)+ grid[n][m];
    dp[n][m] = min(ans1,ans2);
    return dp[n][m];
}
int main(){
    memset(dp,-1,sizeof(dp));
    cin >> row >> col; 
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> grid[i][j];
        }
    }
    cout << MinPathSum(row-1,col-1) << endl;
    return 0;
}

/*

3 3
1 3 1
1 5 1
4 2 1

*/