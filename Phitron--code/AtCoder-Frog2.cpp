

/*
// Memoization-Method (recursive)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int INF = 2e9;
int dp[N],arr[N],n,k;
int stone(int n){
    if(n == 1) return 0;
    if(dp[n] != -1) return dp[n];
    int ans = INF;
    for (int i = 1; i <= k; i++){ 
        if(n-i<=0) break;
        ans = min(ans,stone(n-i)+abs(arr[n]-arr[n-i]));
    }
    dp[n] = ans;
    return dp[n];
}

int main(){
    cin >> n >> k;
    memset(dp,-1,sizeof(dp));
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    cout <<  stone(n) << endl; 
    return 0;
}



=========================================================================================


// Tabulation-Method (iterative)

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int INF = 2e9;
int dp[N],arr[N],n,k; 

int main(){
    cin >> n >> k;
    memset(dp,-1,sizeof(dp));
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    dp[1] = 0;
    for (int x = 2; x <= n; x++){
        dp[x]= INF;
        //if(dp[x] != -1) continue;
        for (int i = 1; i <= k; i++){ 
            if(x-i<=0) break;
            dp[x] = min(dp[x],dp[x-i]+abs(arr[x]-arr[x-i]));
        }
    }
    
    cout <<  dp[n] << endl; 
    return 0;
}




















*/