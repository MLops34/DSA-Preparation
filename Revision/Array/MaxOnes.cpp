#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>

using namespace std;

class Solution{
    public:
    int maxOnes(vector<int>&arr){
        int cnt=1;
        for(int i=0;i<arr.size();i++){
            if(i>0 && arr[i-1]==arr[i]){
                cnt++;
            }else{
                cnt=1;
            }
        }
        return cnt;
    }

};

int main(){
    Solution sol;
    vector<int>arr={1,1,0,1,1,1};
    int ans=sol.maxOnes(arr);
    cout<<ans;
    return 0;
}