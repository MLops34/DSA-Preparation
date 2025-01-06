#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

class Solution{
    public:
    int ThreeSumClosest(vector<int>&nums,int target){
        sort(nums.begin(),nums.end());
        int Closest=INT_MAX;
        for(int i=0;i<=nums.size()-3;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<abs(target-Closest)){
                    Closest=sum;
                }
                if(sum<target){
                    j++;
                }
                else k--;
            }
        }
    return Closest;
    }
};
int main(){
    vector<int>nums={-1,2,1,4};
    int target=1;
    Solution sol;
    int result;
    result=sol.ThreeSumClosest(nums,target);
    cout << "Result: " << result << endl;
    return 0;

}