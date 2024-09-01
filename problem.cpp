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

    int t,count,k;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> k;
        count = 0;
        for(int i=1; i<=2000; i++){
            if(i%3==0 || i%10 == 3) continue;
            count++;
            if(count == k) cout << i << endl;
        }
    }
    
	return 0;
}

