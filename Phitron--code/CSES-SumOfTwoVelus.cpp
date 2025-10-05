//https://cses.fi/problemset/task/1640/

#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n,x;
    cin >> n >> x;
    vector<pair<int,int>>nums;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        nums.push_back(make_pair(a,i+1));
    }
    sort(nums.begin(),nums.end());
    int i=0,j=n-1;
    while (i<j){
        if(nums[i].first + nums[j].first == x) {
            cout << nums[j].second << " " << nums[i].second << endl;
            return 0;
        }
        else if(nums[i].first + nums[j].first > x) j--;
        else if(nums[i].first + nums[j].first < x) i++;
    }
    cout << "IMPOSSIBLE" << endl;

    return 0;
}