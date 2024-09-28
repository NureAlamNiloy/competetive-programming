///   ***   ---   |||		 In the name of ALLAH		|||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
bool isRepdigits(int n){
  string s = to_string(n);
  for(int i =0; i<s.length(); i++){
    if(s[i] !=s[0]) return false;
  }
  return true;
}
int main(){
    optimize();
    fraction();

    string s = "niloy";
    
    return 0;
}

