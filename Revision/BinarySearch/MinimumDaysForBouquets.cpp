class Solution {
public:
   
    bool check(vector<int>&bloomDay,int day,int m,int k)
    {
        int cnt=0,nob=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=day)
            {
                cnt++;
            }
            else
            {
                nob=nob+(cnt/k);
                cnt=0;
            }
        }
        nob=nob+(cnt/k);
        if(nob>=m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        long long n=bloomDay.size();
        if(n<(long)m*k)
        {
            return -1;
        }
        
        int maxi=0,mini=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            maxi=max(bloomDay[i],maxi);
            mini=min(bloomDay[i],mini);
        }
        int low=mini,high=maxi;
        int ans=high;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(check(bloomDay,mid,m,k)==true)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;

        
    }
};