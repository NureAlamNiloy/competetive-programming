#include <bits/stdc++.h>
using namespace std;

int maxOfArray(int arr[],int n){
    if(n==1) return arr[0];
    int maxElement = maxOfArray(arr,n-1);
    if (arr[n-1]>maxElement) return arr[n-1];
    else return maxElement;
}

int main(){

    int n;
    cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++){
     cin >> arr[i];
   }

   int maxi = maxOfArray(arr,n);
   cout << maxi << endl;
    
    return 0;
}

