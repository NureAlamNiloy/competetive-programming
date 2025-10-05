


/*

1. output-- 1,4,2,3,7,8,5,6
2. output--4,1,2,5,6,8,7,9,3
3. yes its possible.. give 1 parent node and 5 child node 
   3 4 5
    \|/
  2--1---6

4. a-- if the string is empty or 1 charecter return the charecter
    
    b-- here is a example "abc"... call the function with substring. substring is "bc".. then cll the function with substring of "bc". then string has only 1 char and return it c then ans+str[0].. and its in reverce order
    
    c-- reverce(str.substr(1))+str[0];

    d------------------------- 
    #include <bits/stdc++.h>
    using namespace std;
    string reverce(string str){
        int n = str.size();
        if(n==0 || n==1) return str;
        return reverce(str.substr(1,n))+ str[0]; 
    }

    int main(){
        string str;
        cin >> str;
        cout << reverce(str);
        return 0;
    }



5---------------------------------------------

#include <bits/stdc++.h>
using namespace std;
int digitSum(int n){
    if(n<10) return n;
    return digitSum(n/10)+ n%10; 
}

int main(){
    int n;
    cin >> n;  
    cout << digitSum(n);
    return 0;
}


//Sum of a array

#include <bits/stdc++.h>
using namespace std;
int digitSum(int arr[],int n){
    if(n==0) return 0;
    return digitSum(arr,n-1)+ arr[n-1]; 
}

int main(){
    int n, arr[5];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << digitSum(arr,n);
    return 0;
}





*/