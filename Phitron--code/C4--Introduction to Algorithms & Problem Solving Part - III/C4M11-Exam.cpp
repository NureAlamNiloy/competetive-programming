



/*

















==========================================================================================



// Convert AdjMatrix to adjList
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int adjMatrix[n][n] = { };
    vector<int> adjList[n];
    for (int i = 0; i < n; i++){
        for(int j = 0; j<n; j++){
            cin >> adjMatrix[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for(int j = 0; j<n; j++){
            if (adjMatrix[i][j] !=0){
                adjList[i].push_back(j);
            }
        }
    }
    cout << endl << endl;
    for (int i = 0; i < n; i++){
        cout << i<< ": ";
        for(int j = 0; j<adjList[i].size(); j++){
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }
    
}




*/