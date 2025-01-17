#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
    public:
    vector<int> RowGenerate(int Row){
        vector<int>temp;
        temp.push_back(1); int res=1;
        for(int i=1;i<Row;i++){
            res=res*(Row-i);
            res=res/i;
            temp.push_back(res);
        }
        return temp;
    }
};

int main(){
    Solution sol;
    vector<vector<int>>Answers;
    for(int i=1;i<=5;i++){
        Answers.push_back(sol.RowGenerate(i));
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<< " " << Answers[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}