// https://atcoder.jp/contests/dp/tasks/dp_d



/*

// Memoization-Method (recursive)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 1e5+10;
ll dp[105][N],w[N],v[N];

ll knapsack(int n, int cap){
    if(n == 0) return 0;
    if(dp[n][cap] != -1) return dp[n][cap];
    if(cap < w[n]){
        dp[n][cap] = knapsack(n-1, cap);
        return dp[n][cap];
    }
    ll ans1 = v[n]+knapsack(n-1, cap-w[n]); 
    ll ans2 = knapsack(n-1, cap);
    dp[n][cap] = max(ans1,ans2); 
    return dp[n][cap]; 
}

int main() {
    int n, cap;
    cin >> n >> cap;
    memset(dp,-1,sizeof(dp));
    for (int i = 1; i <= n; i++) cin >> w[i] >> v[i]; 
    cout << knapsack(n,cap) << endl;

    return 0;
}



============================================================================================================


// Tabulation-Method (iterative)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 1e5+10;
ll dp[102][N],w[N],v[1000+10]; 

int main() {
    int n, cap;
    cin >> n >> cap;
    memset(dp,-1,sizeof(dp));
    for (int i = 1; i <= n; i++) cin >> w[i] >> v[i]; 
    for (int i = 0; i <= cap; i++) dp[0][i] = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= cap; j++){
            if(j < w[i]) dp[i][j] = dp[i-1] [j]; 
            else{
                ll ans1 = v[i]+ dp[i-1] [j-w[i]]; 
                ll ans2 = dp[i-1] [j];
                dp[i][j] = max(ans1,ans2);
            }
        }
    }
    cout << dp[n][cap] << endl;
    return 0;
} 



*/
