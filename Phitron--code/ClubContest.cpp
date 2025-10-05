#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll l,r,t;
    cin >> t;
    for (int x = 0; x < t; x++){
        cin >> l >> r;
        ll sum = 0;
        if(l>r){
            swap(l,r);
            sum = r*(r+1)/2 - l*(l+1)/2+l;
            
        }
        else{
            sum = r*(r+1)/2 - l*(l+1)/2+l;
        }
        cout << sum << endl;
    }  
}


/*

where is king--------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int findIndex(int n, vector<int>&arr){
    vector<int>prefixSum(n,0);
    vector<int>SuffixSum(n,0);
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    SuffixSum[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--){
        SuffixSum[i] = SuffixSum[i+1] + arr[i];
    }
    for (int i = 0; i < n; i++){
        if(prefixSum[i] == SuffixSum[i]) return i;
    }
    return 0; 
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t,n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        vector<int>arr(n);
        for (int j = 0; j < n; j++){
            cin >> arr[j];
        }
        int KingIndex = findIndex(n,arr);
        cout << KingIndex << endl;
    }
}





l to r==================================================================================================

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll l,r,t;
    cin >> t;
    for (int x = 0; x < t; x++){
        cin >> l >> r;
        ll sum = 0;
        if(l>r){
            swap(l,r);
            sum = r*(r+1)/2 - l*(l+1)/2+l;
            
        }
        else{
            sum = r*(r+1)/2 - l*(l+1)/2+l;
        }
        cout << sum << endl;
    }  
}














*/