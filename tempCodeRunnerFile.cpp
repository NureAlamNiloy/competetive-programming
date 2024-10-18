///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define ll long long int

int main(){
    optimize();
    fraction();
    
    int t;
    cin >> t;
    while (t--){
      ll x,y,n;
      cin >> x >> y >> n;
      vector<ll>arr(n);
      arr[0] = x, arr[n-1] = y;
      if(y-x < 3){
        cout << -1 << endl;
        continue;
      }
      int z = 1;
      for(int i = n-2; i>0; i--){
        arr[i] = arr[i+1] - z;
        z++;
      }
      for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
      }
      cout << endl;
    }
    return 0;
}


