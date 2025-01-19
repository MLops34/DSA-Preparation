#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;

class Solution{
    public:
    bool BrutetwoSum(vector<int>&arr,int target){
        bool x=true;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                int sum=arr[i]+arr[j];
                if(sum==target){
                    return true;
                }
            }
        }
        return false;
    }

    int BetterSum(vector<int>&arr,int target){
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            int num=arr[i];
            int x=target-num;
            if(mpp.find(x)!=mpp.end()){
                return true;
            }
            mpp[num]=i;
        }
    }

    int OptimaltwoSum(vector<int>&arr,int target){
        int i=0,j=arr.size()-1;
        sort(arr.begin(),arr.end());
        while( i<j){
            int sum=arr[i]+arr[j];
            if(sum>target) j--;
            else if(sum<target) i++;
            else{
                return true;
            }
        }
    }
};

int main(){
    Solution sol;
    vector<int>arr={2,6,5,8,11};
    bool X=sol.OptimaltwoSum(arr,14);
    cout<< X;
    return 0;

}