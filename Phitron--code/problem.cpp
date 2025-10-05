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
    ll t,n;
    cin >> t;
    while (t--){
      cin >> n;
      if(n%2 ==0){
        while(n != 0){
          n-=2;
          cout << 1;
        }
      }
      else{
        n-=3;
        cout << 7;
        while(n != 0){
          n-=2;
          cout << 1;
        }
      }
      cout << endl;
    }

    return 0;
}


