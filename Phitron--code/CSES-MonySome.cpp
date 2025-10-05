#include <bits/stdc++.h>
using namespace std;

const int N = 1e7;
bool visited[N];
vector<int>dp;

int main(){
    int n;
    cin >> n;
    vector<int>coin(n);
    for (int  i = 0; i < n; i++) cin >> coin[i];
    visited[0] = true;
    int sum = 0;
    for (auto j:coin){
        sum+=j;
        for (int i = sum; i >= j; i--){
            if(visited[i-j] && !visited[i]){
                visited[i] = true;
                dp.push_back(i);
            }
        } 
    } 
    sort(dp.begin(),dp.end());
    cout << dp.size() << endl;
    for (auto i : dp) cout << i << " ";
    
    return 0; 
}