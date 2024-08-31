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

    for(int i=1000; i>0; i--){
        cout << i << " ";
        if((1001 - i) % 5 == 0) cout << endl;
    }
    
	return 0;
}

