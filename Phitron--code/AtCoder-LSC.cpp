// https://atcoder.jp/contests/dp/tasks/dp_f
#include <bits/stdc++.h>
using namespace std;

const int N = 3005;
int dp[N][N];

int main(){
    string st1,st2;
    cin >> st1 >> st2;
    int n = st1.size();
    int m = st2.size();
    dp[0][0] = 0;
    if(st1[0] == st2[0]) dp[0][0] = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            
        }
    }
    


    return 0;
}