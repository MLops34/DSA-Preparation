#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution{
    public:
    int SearchRotatedArray(vector<int>&nums,int target){
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            if(nums[low]<=nums[mid]){
                if(target<=nums[mid] && target>=nums[low]){
                    high=mid-1;
                }else low=mid+1;
            }else{
                if(target>=nums[mid] && target<=nums[high]){
                    low=mid+1;
                }else high=mid-1;
            }
        }
        return -1;
    }
};

int main(){
    Solution sol;
    vector<int>nums={4,5,6,7,0,1,2};
    int ans=sol.SearchRotatedArray(nums,0);
    cout << ans;
    return 0;
}