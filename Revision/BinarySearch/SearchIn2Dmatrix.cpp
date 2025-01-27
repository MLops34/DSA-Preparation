class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size(),m=matrix.size();
        bool Ans=false;
        for(int i=0;i<m;i++){
            Ans=BinarySearch(matrix[i],target);
            if(Ans) return true;
        }
        return Ans;
    }
    private:

    bool BinarySearch(vector<int>matrix,int target){
        int low=0,high=matrix.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(matrix[mid]==target) return true;
            else if (matrix[mid]<target){ low=mid+1;}
            else high=mid-1;
        }
        return false;
    }
};