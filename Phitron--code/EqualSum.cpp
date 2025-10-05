#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int dp[105][N],arr[N],n,target=0;

int subsetSum(int n, int target){

    if(n == 0){
        if(target == 0) return 1;
        else return 0;
    }
    if(dp[n][target] != -1) return dp[n][target];
    int ans1 = subsetSum(n-1, target); 
    if(target < arr[n]){
        dp[n][target] = ans1;
        return ans1; 
    }
    int ans2 = subsetSum(n-1, target-arr[n]);
    dp[n][target] = ans1 or ans2;
    return dp[n][target];
}

int main(){
    memset(dp,-1,sizeof(dp));
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> arr[i]; 
        target+=arr[i];
    } 
    if (target%2 == 1){
        cout << "false" << endl;
        return 0;
    }
    target = target/2;
    if(subsetSum(n,target)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}










/*



// Memoization-Method (recursive)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int dp[105][N],arr[N],n,target=0;

int subsetSum(int n, int target){

    if(n == 0){
        if(target == 0) return 1;
        else return 0;
    }
    if(dp[n][target] != -1) return dp[n][target];
    int ans1 = subsetSum(n-1, target); 
    if(target < arr[n]){
        dp[n][target] = ans1;
        return ans1; 
    }
    int ans2 = subsetSum(n-1, target-arr[n]);
    dp[n][target] = ans1 or ans2;
    return dp[n][target];
}

int main(){
    memset(dp,-1,sizeof(dp));
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> arr[i]; 
        target+=arr[i];
    } 
    if (target%2 == 1){
        cout << "false" << endl;
        return 0;
    }
    target = target/2;
    if(subsetSum(n,target)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}



============================================================================================================================================



// Tabulation-Method (iterative)





*/






















