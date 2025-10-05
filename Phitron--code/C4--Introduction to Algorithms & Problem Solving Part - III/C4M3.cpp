// Graph Representation Code




/*



// Edge List Graph represenation

#include <bits/stdc++.h>
using namespace std; 

int main(){
     int node =4;
     vector<vector <int>>edgeList = {
        {0,1,2},
        {1,2,4},
        {1,3,9},
        {2,3,1}
     };

    //  edgeList.push_back({0,1});
    //  edgeList.push_back({1,2});
    //  edgeList.push_back({1,3});
    //  edgeList.push_back({2,3});

     for (int i = 0; i < edgeList.size(); i++){ 
        cout << edgeList[i][0] << "-----" << edgeList[i][1] << "  weight = " << edgeList[i][2] << endl;
     }
    return 0;
}



========================================================================================================



// Adjacency List Graph represenation Directed, waighted graph

#include <bits/stdc++.h>
using namespace std; 

int main(){
    int node = 4;  
    vector <pair<int,int>> adjList[node];

    adjList[0].push_back({1,2});
    adjList[1].push_back({2,4});
    adjList[3].push_back({2,8});
    adjList[3].push_back({1,7});

    for (int i = 0; i < node; i++){
        cout << i << "-th Node Adj_List = ";
        for (int j = 0; j < adjList[i].size(); j++){ 
            cout << "( "<< adjList[i][j].first << "," << adjList[i][j].second << " ) ";
        }
        cout << endl;
    }
    return 0;
}




============================================================================================================


// Adjacency List Graph represenation unwaighted graph
#include <bits/stdc++.h>
using namespace std;

// Time complexity -> O(n^2)
// Space complexity -> O(n^2)
int main(){
    int node = 4; 
    vector <int> adjList[node];

    adjList[0] = {1};
    adjList[1] = {0,2,3};
    adjList[2] = {1,3};
    adjList[3] = {1,2};

    for (int i = 0; i < node; i++){
        cout << i << "-th Node Adj_List = ";
        for (int j = 0; j < adjList[i].size(); j++){ 
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}




==========================================================================================================


// Adjacency Matry Graph represenation 
// Time complexity -> O(n^2)
// Space complexity -> O(n^2)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int nodes = 4;
    int adjMatrix[4][4] = {}; // Declear all value to 0

    adjMatrix[0][1] = 1;
    adjMatrix[1][0] = 1;
    adjMatrix[1][2] = 1;
    adjMatrix[2][1] = 1;
    adjMatrix[2][3] = 1;
    adjMatrix[3][2] = 1;
    adjMatrix[3][1] = 1;
    adjMatrix[1][3] = 1;

    for (int i = 0; i < nodes; i++){
        for (int j = 0; j < nodes; j++){ 
           cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}






*/

