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

    int i,n,sum=0,x=0,coin=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
       cin >> arr[i]; 
       sum+=arr[i];
    } 
    for(i=0;i<n;i++){
        for(int j=0; j<n; j++){
            if(arr[i]>arr[j]){
                int tamp = arr[i];
                arr[i] = arr[j];
                arr[j] = tamp;
            }
        }
    }
    for(i=0;i<n; i++){
        x += arr[i];
        coin++;
        if(x>(sum-x)) break;

    }
    cout << coin << endl;
    
	return 0;
}

