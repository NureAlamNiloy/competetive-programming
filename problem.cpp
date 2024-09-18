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
    for(int i=0; i<t; i++){
        string s;
        cin >> s;
        int n = s.length();
        if(n>10) cout << s[0] << n-2 << s[n-1] << endl;
        else cout << s << endl; 
    }
   


    return 0;
}

