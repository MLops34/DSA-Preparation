class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int n=mat.size(),m=mat[0].size();
        int low=INT_MIN,high=INT_MAX;
        for(int i=0;i<n;i++){
            low=min(low,mat[i][0]);
            high=max(high,mat[i][m-1]);
        }
        int req=(n*m)/2;
        while(low<=high){
            int mid=(low+high)/2;
            int cnt_small=cntsmall(mat,n,m,mid);
            if(cnt_small<=req) low=mid+1;
            else{
                high=mid-1;
            }
        }
        return low;
    }
    
    private:
    int cntsmall(vector<vector<int>>&mat,int n, int m,int mid){
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt=cnt+upperBound(mat[i],mid);
        }
        return cnt;
    }
    
    private:
    int upperBound(vector<int>&mat,int mid){
        int low=0,high=mat.size()-1;int ans=0;
        while(low<=high){
            int mid2=(low+high)/2;
            if(mat[mid2]>mid){
                ans=mid2;
                high=mid2-1;
            }else {
                low=mid2+1;
            }
        }
        return low;
        
    }
    
};