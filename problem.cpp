///   ***   ---   |||		 In the name of ALLAH		|||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){
    optimize();
    fraction();


    int t;
    cin >> t;
    while(t--){
      int n,track;
      cin >> n;
      int arr[n+4];
      for(int i=1; i<=n; i++){
        cin >> arr[i];
      }
      int mn = arr[1];
      for(int i=1; i<=n; i++){
        if(arr[i]<=mn){
          mn = arr[i];
          track = i;
        } 
      }
      arr[track]++;
      long long int sum = 1;
      for(int i=1; i<=n; i++){
        sum*=arr[i];
      }
      cout << sum << endl;
    }

    return 0;
}

