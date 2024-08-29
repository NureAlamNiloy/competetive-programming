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
    
    int m,n, flag=0;
    cin >> m >> n;
    char arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == 'W' || arr[i][j] == 'G' || arr[i][j] == 'B') continue;
            else flag = 1;
        }
    }
    if(flag == 1) cout << "#Color" << endl;
    else cout << "#Black&White" << endl;

	return 0;
}

