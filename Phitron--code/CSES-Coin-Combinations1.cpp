// https://cses.fi/problemset/task/1635

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 1e9+7;
vector<ll>dp;

int main(){

    int n,x;
    cin >> n >> x;
    vector<ll>coin(n,0);
    for(int i = 0; i < n; i++) cin >> coin[i];
    dp.push_back(1);
    for (int i = 1; i <= x; i++){
        ll sum = 0;
        for (int j = 0; j < n; j++){
            if(i-coin[j] >= 0){
                sum+= dp[i-coin[j]];
            }
        } 
        dp.push_back(sum%N);
    }
    cout << dp[x] << endl; 
    return 0;
}
