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
    int t,n,k;
    cin >> t;
    while (t--){
      cin >> n >> k;
      int arr[n+5];
      for(int i=0; i<n; i++) cin >>arr[i];
      for(int i=0; i<n-1; i++){
        if(arr[i] < k){
          k-= arr[i];
          arr[n-1] += arr[i];
          arr[i] = 0;
        }
        else{
          arr[i] -=k;
          arr[n-1] += k;
          k = 0;
        }
      }
      for(int i=0; i<n; i++) cout << arr[i] << " ";
      cout << endl;
    }

    return 0;
}


