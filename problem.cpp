///   ***   ---   |||		 In the name of ALLAH		|||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    fraction();
    optimize();

    int arr[8];
    for(int i=0; i<8; i++){
        cin >> arr[i];
    }
    for(int i=0; i<8; i++){
        if(arr[i]<100 || arr[i]>675 || arr[i]%25 !=0){
            cout << "No" << endl;
            return 0;
        }
        if(i==0) continue;
        if(arr[i]< arr[i-1]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
	return 0;
}

