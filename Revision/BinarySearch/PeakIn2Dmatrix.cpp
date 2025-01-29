#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class solution{
    public:
    vector<int> PeakGrid(vector<vector<int>>& arr)
    {
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=low+high/2;
            int row=max(arr,mid);
            int left= (mid-1>=0) ? arr[row][mid-1] :-1;
            int right=(mid+1<arr.size()) ? arr[row][mid+1] : -1;
            if(arr[row][mid]>left && arr[row][mid]>right) return {row,mid};
            else if (arr[row][mid]>left) low=mid+1;
            else high=mid-1;
        }
        return {-1,-1};
    }

    private:

    int max(vector<vector<int>>arr,int mid){
        int maxi=-1,index=-1;
        for(int i=0;i<arr.size();i++){
            if(maxi<arr[i][mid]){
                maxi=arr[i][mid];
                index=i;
            }
        }
        return index;
    }
};

int main(){
    vector<vector<int>> arr={{10,20,15},{21,30,14},{7,16,32}};
    solution sol;
    vector<int> ans=sol.PeakGrid(arr);
    cout << "["  ;
    for(int i=0;i<ans.size();i++){
        cout<< " " << ans[i] << " ";
    }
    cout << "]";
    return 0;
}
