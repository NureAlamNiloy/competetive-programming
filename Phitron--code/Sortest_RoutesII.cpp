// Problem Link : https://cses.fi/problemset/task/1672
#include <bits/stdc++.h>
using namespace std;

const long long int N = 1e3;
const long long int INF = 1e12;
long long n,m,u,v,q,w,d[N][N]; 


int main(){

    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            d[i][j] = INF;
        } 
    }

    for (int i = 1; i <= m; i++){
        cin >> u >> v >> w;
        d[u][v] = min(d[u][v],w);
        d[v][u] = min(d[v][u],w); 
    }

    for (int i = 1; i <= n; i++){
        d[i][i] = 0;
    }

    for (int k = 1; k <= n; k++){
        for (int u = 0; u <= n; u++){
            for (int v = 0; v <= n; v++){
                d[u][v] = min(d[u][v], d[u][k]+d[k][v]);
            }
            
        } 
    }
    
    for (int i = 0; i < q; i++){
        int u,v;
        cin >> u >> v; 
        if(d[u][v] == INF) cout << -1 << endl;
        else cout  << d[u][v] << endl;  
    } 
    return 0;
}