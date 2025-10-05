/*

problem link = https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
1. reverce function diye solve kora jay
2. nicher code er moto 2 pointer diye 1st element last ee niye swap kore solve kora jay

*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)cin >> arr[i];
    for (int i = 0; i < n; i++) cout <<  arr[i] << " ";
    cout << endl << endl << endl;
    int start = 0,end = n-1;
    while (start<end){
        int tamp = arr[start];
        arr[start] = arr[end];
        arr[end] = tamp;
        start+=1;
        end-=1;
    }
    for (int i = 0; i < n; i++) cout <<  arr[i] << " ";
    return 0;
}