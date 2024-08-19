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
    
    int n;
    cin >> n;
   if (0 <= n && n <= 999) {
        cout << n << endl;
    } 
    else if (1000 <= n && n <= 9999) {
        cout << (n / 10) * 10 << endl;
    } 
    else if (10000 <= n && n <= 99999) {
        cout << (n / 100) * 100 << endl;
    } 
    else if (100000 <= n && n <= 999999) {
        cout << (n / 1000) * 1000 << endl;
    } 
    else if (1000000 <= n && n <= 9999999) {
        cout << (n / 10000) * 10000 << endl;
    } 
    else if (10000000 <= n && n <= 99999999) {
        cout << (n / 100000) * 100000 << endl;
    } 
    else if (100000000 <= n && n <= 999999999) {
        cout << (n / 1000000) * 1000000 << endl;
    }

	return 0;
}

