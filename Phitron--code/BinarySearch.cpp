#include <bits/stdc++.h>
using namespace std; 

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size()-1;
    while(start<end){
        int mid = start +(end-start)/2; 
        if (arr[mid] < arr[mid+1]) start = mid+1;
        else end = mid;
    }
    return start;
}
int main(){

    vector<int>people = {3,2,2,1};

    return 0;
}


/*














========================================================================================================


//Find  Occarance
#include <bits/stdc++.h>
using namespace std; 

int firstOcc(vector<int>& nums, int target){
    int start = 0;
    int end = nums.size()-1;
    int ans = -1;
    while (start <= end){
        int mid = start+(end-start)/2;
        if(nums[mid] == target){
            ans = mid;
            end = mid -1;
        }
        else if(nums[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        } 
    }
    return ans;
}
int lastOcc(vector<int>& nums, int target){
    int start = 0;
    int end = nums.size()-1;
    int ans = -1;
    while (start <= end){
        int mid = start+(end-start)/2;
        if(nums[mid] == target){
            ans = mid;
            start = mid + 1;
        }
        else if(nums[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}
int main(){

    vector<int> arr = {1,3,3,3,5,3,4,5,3,3,6}; 
    cout << "The 1st occarance of 3 is at index =" << firstOcc(arr,3) << endl; 
    cout << "The lasr occarance of 3 is at index =" << lastOcc(arr,3) << endl;

    return 0;
}






*/