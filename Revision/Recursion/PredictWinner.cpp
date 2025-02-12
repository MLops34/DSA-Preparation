#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class solution{
    public:
    int solve(vector<int>&nums,int i,int j){
        if(i==j) return nums[i];
        int pickleft=nums[i]-solve(nums,i+1,j);
        int pickright=nums[j]-solve(nums,i,j-1);
        return max(pickleft,pickright);
    }

    bool predict(vector<int>&nums){
        return 2*solve(nums,0,nums.size()-1)>=0;
    }
};

int main(){
    vector<int>nums={1,5,233,7};
    solution sol;
    bool ans=sol.predict(nums);
    cout << ans;
    return 0;
}