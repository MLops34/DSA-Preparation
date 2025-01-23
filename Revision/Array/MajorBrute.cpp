#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class Majority{
    public:
    int Major(vector<int> &nums){
        int n=nums.size(); int cnt=1; int ans;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i] == nums[i-1]){
                cnt++;
                if(cnt>n/2){
                     ans=nums[i];
                }
            }else if (nums[i]!=nums[i-1]){
                cnt=1;
            }
        }
        return ans;
    }
};

int main(){
    Majority sol;
    vector<int> nums={2,2,1,1,1,2,2};
    sort(nums.begin(),nums.end());
    int Max;
    Max=sol.Major(nums);
    cout<< Max;
    return 0;
}