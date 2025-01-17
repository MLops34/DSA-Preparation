#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution{
    public:
    vector<int> PrintRow(int row){
        int ans=1; vector<int> temp;
        temp.push_back(1);
        for(int i=1;i<row;i++){
            ans=ans*(row-i);
            ans=ans/i;
            temp.push_back(ans);
        }
        return temp;
    }
};

int main(){
    Solution sol;
    vector<int>Answers=sol.PrintRow(5); 
    for(int i=0;i<Answers.size();i++){
        cout << Answers[i] << " ";
    }
    return 0;
}