
/*



// Memoization-Method (recursive)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int dp[105][N],arr[N],n,target;
int subsetSum(int n, int target){
    if(n == 0){
        if(target == 0) return true;
        else return false;
    }
    if(dp[n][target] != -1) return dp[n][target]; 
    int ans1 = subsetSum(n-1 , target);
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
    cin >> n >> target;
    for (int i = 1; i <= n; i++) cin >> arr[i]; 
    if(subsetSum(n,target)) cout << "Target is possible" << endl;
    else cout << "Target is't possible" << endl;
    return 0;
}



============================================================================================================================================



// Tabulation-Method (iterative)

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int dp[105][N],arr[N],n,target; 
int main(){
    memset(dp,-1,sizeof(dp));
    cin >> n >> target;
    for (int i = 1; i <= n; i++) cin >> arr[i]; 
    dp[0][0] = 1;
    for (int i = 1; i <= target; i++) dp[0][i] = 0; 

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= target; j++){
            int ans1 = dp[i-1][j];
            if(target < arr[i]){
                dp[i][j] = ans1; 
            }
            else{
              int ans2 = dp[i-1] [j-arr[i]]; 
              dp[i][j] = ans1 or ans2;  
            }   
        }
    }
    

    if(dp[n][target]) cout << "Target is possible" << endl;
    else cout << "Target is't possible" << endl;
    return 0;
}



*/






















