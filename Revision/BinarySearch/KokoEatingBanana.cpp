#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
class Solution{
    public:
    int KoKoEatingBS(vector<int>&nums,int k){
        sort(nums.begin(),nums.end());
        int low=nums[0],high=nums[nums.size()-1];
        while(low<=high){
            int mid=(low+high)/2;
            if(calc(nums,mid)<=k){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
    private:
    int calc(vector<int>&nums,int hour){
        int n=nums.size();
        int sumhours=0;
        for(int i=0;i<n;i++){
            sumhours+=ceil((double)nums[i]/ (double)hour);
        }
        return sumhours;
    }
};

int main(){
    Solution sol;
    vector<int>nums={3,6,15,7};
    int answer=sol.KoKoEatingBS(nums,8);
    cout<< "Answer--" << answer;
    return 0;
}