// Topic -- Marge Short, Quick Short and their complexity..

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> prime;
    vector <bool> visited(n+1);
    for (int i = 2; i <= n; i++){
       if (visited[i]==false){
            prime.push_back(i);
            for (int j = 2; i*j <= n; j++){
                visited[i*j] = true;
            }
       }
    }
    
    return 0;
}





/*

//Marge Short
#include <bits/stdc++.h>
using namespace std;


vector <int> margShort(vector <int> arr){
    //base case
    if (arr.size()<2){
        return arr;
    }
    int mid=arr.size()/2;
    vector <int> b;
    vector <int> c;
    for (int i = 0; i < mid; i++){
        b.push_back(arr[i]);
    }
    for (int i = mid; i < arr.size(); i++){
        c.push_back(arr[i]);
    }
    vector <int> sorted_b = margShort(b);
    vector <int> sorted_c = margShort(c);

    vector <int> sorted_a;
    int idx1 = 0, idx2 = 0;
    for (int i = 0; i < arr.size(); i++){
        if(idx1 == sorted_b.size()){
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2==sorted_c.size()){
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if(sorted_b[idx1]<sorted_c[idx2]){
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else{
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}


int main(){

    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector <int> ans = margShort(a);
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    

}


*/






