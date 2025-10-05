#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> x;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i==j) continue;
            if(nums[i]+nums[j] == target){
                x.push_back(nums[i]);
                x.push_back(nums[j]);
                return x;
            }
        }
        
    }
}

int main(){

}