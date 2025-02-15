#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class solution{
    public:
    int Find(vector<int>&nums,int i,int max){
        int n=nums.size();

        if(i==n){
            return max;
        }

        if(nums[i]>max){
            max=nums[i]; 
        }
        
        
        return Find(nums,i+1,max);
        
    }
};

int main(){
    vector<int>nums={1,2,3,4,8,7,12,10,5};
    solution sol;
    int answer=sol.Find(nums,0,0);
    cout<<answer;
    return 0;

}