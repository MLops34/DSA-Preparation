#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>

using namespace std;
class solution{
    public:
    int RowMaxOnes(vector<vector<int>>&temp){
        int n=temp.size(); int index=-1,maxi=0; int m=temp[0].size();
        for(int i=0;i<n;i++){
            int cnt=firstOccurnz(temp[i]);
            int noOnes=m-cnt;
            if(maxi<noOnes){
                maxi=noOnes;
                index=i;
            }
        }return index;
    }

    int firstOccurnz(vector<int>temp){
        int low=0,high=temp.size()-1;int ans=temp.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(temp[mid]==1){
                ans=mid;
                high=mid-1;
            }else low=mid+1;
        }
        return ans;
    }
};

int main(){
    solution sol;
    vector<vector<int>> temp={{{0,1,1,1},{0,0,0,0},{1,1,1,1},{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1}}};
    int ans=sol.RowMaxOnes(temp);
    cout << "Row with the max Ones::" << ans;
    return 0;
}

