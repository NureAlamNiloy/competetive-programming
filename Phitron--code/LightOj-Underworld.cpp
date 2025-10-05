// https://lightoj.com/problem/back-to-underworld
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 20005;
vector<int> vec[N];
bool visited[N]= {};
bool color[N]= {}; 
void clr(){
    memset(visited,false,sizeof (visited));
    memset(color,false,sizeof (color));
    for(int i=0; i<20010; i++) vec[i].clear();
}
ll underWorld(int x){
    ll lyk=0,vamp=0;
    queue<int>q; 
    q.push(x);
    visited[x]=1;
    color[x]=1;
    lyk++;

    while(!q.empty()) {
        int u = q.front();
        q.pop(); 
        for(int i=0; i<vec[u].size(); i++) {
            int v = vec[u][i];
            if(visited[v]==0) {
                q.push(v);
                visited[v]=1; 
                if(color[u]==1) {
                    color[v] = 0;
                    vamp++;
                }
                else {
                    color[v] = 1;
                    lyk++;
                }
            }
        }
    }
    ll ans = max(vamp,lyk); 
    return ans;
}

int main(){
    int t,u,v,n;
    cin >> t;

    for (int x = 1; x <= t; x++) {
        clr(); 
        cin >> n;
        ll sum=0;

        for (int i = 0; i < n; i++) {
            cin >> u >> v;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }

        for(int i=0; i<N; i++){
            if(visited[i]==0 && !vec[i].empty()) {
                sum+= underWorld(i);
            }
        }
        cout<< "Case " << x << ": " << sum << endl;
    }
    return 0;
}

