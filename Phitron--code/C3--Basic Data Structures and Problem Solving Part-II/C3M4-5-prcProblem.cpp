



/*

//p1---
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cin >> n;
    vector <int> arr;
    arr.resize(n);
    for (int i = 0; i < n; i++){
       cin >> arr[i];
       sum = sum+arr[i];  
    }
    cout << sum << "\n";

    

    return 0;
}



//P2---#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=1;
    cin >> n;
    vector <int> arr;
    arr.resize(n);
    for (int i = 0; i < n; i++){
       cin >> arr[i];
       if (i%2!=0)sum*=arr[i]; 
        
    }
    cout << sum << "\n";
    return 0;
}



//P3---
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str;
    cin >> str;
    n = str.size();
    for (int i = 0; i < n; i++){
        if (i%2==0){
            str[i]+=1;
        }
    }
    cout << str;
    
    return 0;
}


//P4----
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    vector <int> a;
    a.resize(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter 2nd Array\n";
    int x;
    cin >> x;
    vector <int> b;
    b.resize(x);
    for (int i = 0; i < x; i++){
        cin >> b[i];
        
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < x; j++){
            if (a[i]==b[j]){
                cout << a[i] << " ";
            }
        }
        
    }
    
    
    return 0;
}



//P5----




*/