///   ***   ---   |||		 In the name of ALLAH		|||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){
    optimize();
    fraction();

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
            cin >> arr[i];
    }
    for(int i=1; i<n; i++){
        if(arr[i-1]>= arr[i]){
            cout << arr[i-1] << endl;
            break;
        }
        if(i== n-1) cout << arr[i] << endl;
    }
   


    return 0;
}

