// Problem Link : https://atcoder.jp/contests/dp/tasks/dp_a





/*


// Memoization-Method (recursive)
#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int dp[N] , h[N];

int stone(int n){
    if(n<=1) return 0; // base case
    if(dp[n] != -1) return dp[n];
    int ans1 = stone(n-1)+abs(h[n]-h[n-1]); // recursive function
    if(n==2){ // edge case
        dp[n] = ans1;
        return dp[n];
    }
    int ans2 = stone(n-2)+ abs(h[n]-h[n-2]);
    dp[n] = min(ans1,ans2);
    return dp[n];
}

int main(){
    int n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    for (int i = 1; i <= n; i++){
        cin >> h[i];
    }
    cout << stone(n) << endl;

    return 0;
}





// Tabulation-Method (iterative)
#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int dp[N] , h[N];

int main(){
    int n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    for (int i = 1; i <= n; i++){
        cin >> h[i];
    }
    dp[1] = 0;
    for (int i = 2; i <= n; i++){
        int ans1 = dp[i-1]+abs(h[i]-h[i-1]); 
        if(n==2){ 
            dp[i] = ans1;
            continue;
        }
        int ans2 = dp[i-2]+ abs(h[i]-h[i-2]);
        dp[i] = min(ans1,ans2);
    }
    
    cout << dp[n] << endl;

    return 0;
}






*/