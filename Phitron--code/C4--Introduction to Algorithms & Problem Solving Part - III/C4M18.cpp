/*
// Fload warsal(All pair Sortest path)

-- Time Complexity O(v^3) where v is number of node
-- Space Complexity O(v^2)

--input: A weighted graph as an adjacency Matrix
--output: All pair sortest path

-- Create a distance matrix "d" where d[i][j] = x.... whre there is a direct edge from node i to node j and there cost is x;
-- for all node i d[i][i] = 0;
-- for all node i & j where there isnot any direct edge from i to j  so d[i][j] = infinity


-- for all node k
    - for all node u
        - for all node v
            d[u][v] = min(d[u][v], d[u][k]+d[k][v])

-- Outpu the distance matrix d



*/



#include <bits/stdc++.h>
using namespace std;

const int N = 1e5,INF = 1e9;
int n,m,u,v,w,d[N][N];


int main(){

    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            d[i][j] = INF;
        } 
    }

    for (int i = 1; i <= m; i++){
        cin >> u >> v >> w;
        d[u][v] = w;
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
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){ 
           cout  << d[i][j] << " ";
        }  
        cout << endl;
    } 
    return 0;
}


