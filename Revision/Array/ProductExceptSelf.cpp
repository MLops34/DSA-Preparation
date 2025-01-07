#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left(nums.size());
        vector<int>right(nums.size());
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i==0){
                left[i]=1;
            }else{
                left[i]=nums[i-1]*left[i-1];
            }
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                right[i]=1;
            }else{
                right[i]=nums[i+1]*right[i+1];
            }
        }
        for(int i=0;i<n;i++){
            nums[i]=left[i]*right[i];
        }
        return nums;      
    }
};

int main(){
    vector<int>nums={1,2,3,4};
    Solution sol;
    vector<int> Result=sol.productExceptSelf(nums);
    for(int i=0;i<Result.size();i++){
        cout<< Result[i] << " ";
    }
    return 0;
}