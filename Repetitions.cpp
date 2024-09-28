///   ***   ---   |||		 In the name of ALLAH		|||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
bool isRepdigits(int n){
  string s = to_string(n);
  for(int i =0; i<s.length(); i++){
    if(s[i] !=s[0]) return false;
  }
  return true;
}
int main(){
    optimize();
    fraction();

    int n,l,r;
    cin >> n >> l >> r;
    int arr[n+3];
    for(int i=1; i<=n; i++){
      cin >> arr[i];
    }
    for(int i=1; i<=n; i++){
      for(int j=l; j<=r; j++){
        int sum = j-arr[i];
        if(sum>=l and sum<=r){
          cout << sum << " ";
          break;
        }
      }
    }
    

    return 0;
}

