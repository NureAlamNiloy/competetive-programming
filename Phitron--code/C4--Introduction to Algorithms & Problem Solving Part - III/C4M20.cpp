#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll arr[1000];

ll fibo(int n){
    
    if(n<=2) return 1;
    if(arr[n] != 0) return arr[n];
    arr[n] = fibo(n-1)+fibo(n-2);
    return arr[n];

}

int main(){

    cout << fibo(3) << endl;
    cout << fibo(5) << endl;
    cout << fibo(50) << endl;

    return 0;
}