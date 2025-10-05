#include <bits/stdc++.h>
using namespace std;

int main(){

    //time complexity O(n+1+n+1) = O(2*n) = O(n)
    int n;
    cin >> n;
    vector <int> a;
    a.resize(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxi = a[0];
    int mini = a[0];
    int sum = 0;
    for (int i = 0; i < n; i++){
        maxi = max(maxi,a[i]);
        mini = min(mini,a[i]);
        sum+=a[i];
    }
    cout << "The Max Number is = " << maxi << endl ;
    cout << "The min Number is = " << mini << endl ;
    cout << "The sum is = " << sum << endl ;

    return 0;
}



/*


// Constent er Complexity
#include <bits/stdc++.h>
using namespace std;

int main(){
    // time complexity O(1) 
    //Memory complexity O(1)
    int a,b,c;
    cin >> a >> b >> c;
    int maxi = max({a,b,c});
    int mini = min({a,b,c});
    int sum = a+b+c;
    int multi = a*b*c;

    cout << "The Max Number is = " << maxi << endl ;
    cout << "The min Number is = " << mini << endl ;
    cout << "The sum is = " << sum << endl ;
    cout << "The sum is = " << multi << endl ;

    return 0;
}



*/