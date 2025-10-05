#include <bits/stdc++.h>
using namespace std;

vector <int> margeShort(vector <int> n){
    
}

int main(){

    int n;
    cin>> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector <int> ans = margeShort(a);
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    
    

    return 0;
}






/*


//fectorial problem 
#include <bits/stdc++.h>
using namespace std;

long long int fectorial(int n){
    if(n==0) return 1;
    return fectorial(n-1)*n;
}

int main(){

    int n;
    cin>> n;
    cout << fectorial(n) << endl;

    return 0;
}




// Minimum coins
#include <bits/stdc++.h>
using namespace std;
vector<int> coins = {1,3,4};

int coinCount(int n){

    if(n==0) return 0;
    
    int ans = 10000000;
    for (int i = 0; i < coins.size(); i++){
        if (n>=coins[i]){
            ans = min(ans , 1+ coinCount(n-coins[i]));
        }
    }

    return ans;
}

int main(){

    int n;
    cin>> n;
    cout << coinCount(n) << endl;

    return 0;
}





















*/