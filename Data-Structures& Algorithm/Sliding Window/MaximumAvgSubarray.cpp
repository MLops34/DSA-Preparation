#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxi=sum;
        for(int i=k;i<n;i++){
            sum=sum+nums[i]-nums[i-k];
            maxi=max(maxi,sum);
        }
        return (double)maxi/k;
    }
};

int main(){
    Solution sol;
    vector<int>arr={1,12,-5,-6,50,3};
    cout << sol.findMaxAverage( arr,4 ) ;
    return 0;
}