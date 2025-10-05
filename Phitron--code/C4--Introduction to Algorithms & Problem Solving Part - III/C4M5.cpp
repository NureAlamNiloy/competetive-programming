/*
DFS, Recursion        








*/


#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n<0) return 0; 
    return n+sum(n-1);
}

bool is_palindrom(string str){
    int n = str.size();
    if(str == " " || n==1) return true;
    string small_str = str.substr(1,n-2);
    return is_palindrom(small_str) && (str[0] == str.back());
}

int main(){
    string str;
    cin >> str;
    if(is_palindrom(str)) cout <<"It's a Palindrom";
    else cout <<"It's not a Palindrom";
    return 0;
}