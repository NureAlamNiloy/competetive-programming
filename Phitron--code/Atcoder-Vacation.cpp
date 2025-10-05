

/*
// Memoization-Method (recursive)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10; 
int dp[N][4],happines[N][4],n; 

int vacaion(int day,int currentTask){
    if(day == 1) return happines[day][currentTask];
    if(dp[day][currentTask]  != -1) return dp[day][currentTask];
    int maxHappy = 0;
    for (int i = 1; i <= 3; i++){
        if(i != currentTask){
            int ans = vacaion(day-1,i)+happines[day][currentTask];
            maxHappy = max(maxHappy, ans);
        }
    }
    dp[day][currentTask] = maxHappy;
    return maxHappy;
}

int main(){

    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 3; j++){
            cin >> happines[i][j]; 
            dp[i][j] = -1; 
        }
    }
    int ans1 = vacaion(n,1);
    int ans2 = vacaion(n,2);
    int ans3 = vacaion(n,3); 
    cout << max({ans1,ans2,ans3}) << endl;
    return 0;
}


==============================================================================


// Tabulation-Method (iterative)

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10; 
int dp[N][4],happines[N][4],n; 

int main(){

    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 3; j++){
            cin >> happines[i][j]; 
            dp[i][j] = -1; 
        }
    }
    for (int i = 1; i <= 3; i++) dp[1][i] = happines[1][i]; 
     
    for (int day = 1; day <= n; day++){ 
        for (int currentTask = 1; currentTask <= 3; currentTask++){
            int maxHappy = 0;
            for (int lastTask = 1; lastTask <= 3; lastTask++){
                if(lastTask != currentTask){
                    int ans = dp[day-1][lastTask]+happines[day][currentTask];
                    maxHappy = max(maxHappy, ans);
                }
            }  
            dp[day][currentTask] = maxHappy;
        }
    }
    cout << max({dp[n][1],dp[n][2],dp[n][3]}) << endl;
    return 0;
}







*/