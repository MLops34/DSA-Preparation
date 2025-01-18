#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution{
    public:
    vector<int> MoveZeros(vector<int> &Arr){
        int n=Arr.size();
        int x=0,temp=0;
        for (int i = 0 ; i < n ; i++){
            if(Arr[i]==0){
                temp=Arr[i];
                Arr[i]=Arr[x];
                Arr[x]=temp;
                x++;
            }
        }
        return Arr;
    }

};

int main(){
    Solution sol;
    vector<int>Arr={1,0,2,3,4,9,0,0,6,5,4,2,0,9};
    vector<int>Ans=sol.MoveZeros(Arr);
    cout << "[";
    for(int i=0;i<Ans.size();i++){
        cout << Ans[i] << " ";
    }
    cout<< "]";
    return 0;

}