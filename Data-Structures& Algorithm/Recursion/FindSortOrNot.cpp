#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class solution{
    public:
    int Check(vector<int>&nums,int i){
        int n=nums.size();

        if(i==n){
            return true;
        }
        if(nums[i]>nums[i-1]){
            
        }
        else return false;
        
        
        return Check(nums,i+1);
        
    }
};

int main(){
    vector<int>nums={1,2,3,8,5};
    solution sol;
    int answer=sol.Check(nums,1);
    cout<<answer;
    return 0;

}