#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution{
    public:
    int UpperBound(vector<int>Arr,int target){
        int low=0,high=Arr.size()-1;
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            if(Arr[mid]>target){
                ans=mid;
                high=mid-1;
            }else low=mid+1;
        }
        return ans;
    }

};

int main(){
    Solution sol;
    vector<int>Arr={2,4,6,8,9,10,12,14,16,18,20};
    int Func=sol.UpperBound(Arr,19);
    cout << "Answer-->" << Func;
    return 0;
}