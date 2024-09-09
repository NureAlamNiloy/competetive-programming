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

    string s,x;
    x="hello";
    cin >> s;
    int n = s.length();
    vector<int> v(5, 0);
    bool hflag = false;
    int y =0;
    if(n<5){
        cout << "NO" << endl;
        return 0;
    }
    for(int i=0; i<5; i++){
        for(int j =y; j<n; j++){
            if(x[i] == s[j]){
                if(s[j] == 'h' && hflag == false){
                    v[i] = j;
                    hflag = true;
                }
                if(hflag == false) continue;
                v[i] = j; 
                y = j+1;
                break;
            } 
        }
    }
    // for(int i=0; i<5; i++){
    //     cout << v[i] << " ";
    // }


    for(int i=0; i<4; i++){
        if(v[i]> v[i+1]){
            cout << "NO" << endl;
            return 0;
        }
       
    }
   
    cout << "YES" << endl;

	return 0;
}

