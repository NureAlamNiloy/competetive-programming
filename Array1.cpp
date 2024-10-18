///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
bool isPerfectSqrt[100000001];
int main(){
    optimize();
    fraction();

    char arr[12][12];
    for(int i=1; i<=10; i++){
      for(int j=1; j<=10; j++){
        cin >> arr[i][j];
      }
    }
    int sum = 0;
    for(int i=1; i<=10; i++){
      for(int j=1; j<=10; j++){
        if (arr[i][j] == 'X'){
          if(i<=5){
            if(j<=5)  sum+= min(i,j);
            else{
              int x = j-5;
              sum+= min(x,j);
            }
          }
          else{
            int x = i-5;
            if(j<=5)  sum+= min(x,j);
            else{
              int y = j-5;
              sum+= min(x,y);
            }
          }
        }
      }
    }
    cout << sum << endl;

    return 0;
}


