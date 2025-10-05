// Tabulation-Method (iterative)
#include <bits/stdc++.h>
using namespace std;

const int N = 2000;
int dp[N];

int main(){

    int n;
    cin >> n; 
    memset(dp,-1,sizeof(dp)); 
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n] << endl;
    
    return 0;
}






/*


# DP Steps
============
- Define state
- Identify the recursive equation from the smaller problems
- Define base case


# Memoization-Method (recursive)
===============================

fun(n, a, b, c, ...) {
    // 1. handle base case

    // 2. if current state is already solved, return the result

    // 3. calculate the result from smaller sub-problems
}


# Tabulation-Method (iterative)
==============================

main() {

    // 1. handle base case

    // 2. loop through the states
        // 2.1. and calculate the answer from smaller sub-problems
}


======================================================================================================================================

//  Memoization-Method (recursive)
#include <bits/stdc++.h>
using namespace std;

const int N = 2000;
int dp[N];
int fib(int n){ 
    if(n <= 1) return n;
    if(dp[n] != -1) return dp[n];
    dp[n] = fib(n-1)+fib(n-2);   
    return dp[n];
}

int main(){

    int n;
    cin >> n; 
    memset(dp,-1,sizeof(dp)); 
    cout << fib(n) << endl ;

    return 0;
}

======================================================================================================================================

// Fibonacci series-- Tabulation-Method (iterative)
#include <bits/stdc++.h>
using namespace std;

const int N = 2000;
int dp[N];

int main(){

    int n;
    cin >> n; 
    memset(dp,-1,sizeof(dp)); 
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n] << endl;
    
    return 0;
}

======================================================================================================================================

















*/