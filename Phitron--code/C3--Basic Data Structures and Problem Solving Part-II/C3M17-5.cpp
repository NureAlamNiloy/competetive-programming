

#include <bits/stdc++.h>
using namespace std;

int sumOfArr(vector <int> n , int x){
    if(x<=0) return 0;
    
    return n[x-1]+sumOfArr(n,x-1);
}

int main(){

    int n;
    cin>> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << sumOfArr(a,n) << endl;
    

    return 0;
}






/*


//p---1
    a. - Time Complexity --- O(nloge(n))
    b. - Time Complexity --- O(n)
    b. - Time Complexity --- O(n^2)


// p--3
#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1) return n;
    
    return fib(n-1)+fib(n-2);
}

int main(){

    int n;
    cin>> n;
    cout << fib(n) << endl;
    

    return 0;
}


//p--4
#include <bits/stdc++.h>
using namespace std;

int sumOfArr(vector <int> n , int x){
    if(x<=0) return 0;
    
    return n[x-1]+sumOfArr(n,x-1);
}

int main(){

    int n;
    cin>> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << sumOfArr(a,n) << endl;
    

    return 0;
}







*/