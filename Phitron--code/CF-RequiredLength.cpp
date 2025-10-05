// https://codeforces.com/problemset/problem/1681/D

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){   
    ll n,v;
    cin >> n >> v;
    queue<ll> q;
    map<ll, int> dig;
    dig[v] = 0;
    q.push(v);
    while(!q.empty()){
        ll k = q.front();
        q.pop();
        string st = to_string(k);
        if(st.size() == n){
            cout << dig[k] << endl;
            return 0;
        }
        for(auto x : st) {
            if(x == '0') continue;
            ll w = k * int(x - '0');
            if(!dig.count(w)) {
                dig[w] = dig[k] + 1;
                q.push(w);
            }
        }
    }
    cout << -1 << endl;
    return 0;
}