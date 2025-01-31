#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>

using namespace std;

class Solution{
    public:
    int maxOnes(vector<int>&arr){
        int cnt=1;int fun=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]==arr[i]){
                cnt++;
            }else{
                cnt=1;
                fun=arr[i-1];
            }
        }
        return fun;
    }

};

int main(){
    Solution sol;
    vector<int>arr={4,1,2,1,2};
    int ans=sol.maxOnes(arr);
    cout<<ans;
    return 0;
}