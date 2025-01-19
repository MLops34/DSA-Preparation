#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution{
    public:
    vector<int> BetterSortColor(vector<int>&arr){
        int cnt0=0,cnt1=0,cnt2=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) cnt0++;
            else if (arr[i]==1) cnt1++;
            else cnt2++;
        }
        for(int i=0;i<cnt0;i++) arr[i]=0;
        for(int i=cnt0;i<cnt1+cnt0;i++) arr[i]=1;
        for(int i=cnt1+cnt0;i<cnt2+cnt0+cnt1;i++) arr[i]=2;

        return arr;
    }

    vector<int> OptimalSortColor(vector<int>&arr){
        int low=0,high=arr.size()-1,mid=0;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                mid++,low++;
            }else if (arr[mid]==2){
                swap(arr[mid],arr[high]);
                high--;
            }else mid++;
        }
        return arr;
    }

};

int main(){
    Solution sol;
    vector<int>arr={0,1,0,2,0,1,2,1,1,2,0,0,1,0};
    vector<int>ans=sol.OptimalSortColor(arr);
    cout << "[";
    for(int i=0;i<ans.size();i++){
        cout  << ans[i] << " ";
    }
    cout<< "]";
    return 0;
}