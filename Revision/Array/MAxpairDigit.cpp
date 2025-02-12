class Solution {
    public:
        int maximumSum(vector<int>& nums) {
            unordered_map<int,int> mpp;
            int sum=-1;
            for(int num:nums){
                int dsum=DigitSum(num);
                if(mpp.find(dsum)!=mpp.end()){
                    sum=max(sum,mpp[dsum]+num);
                    mpp[dsum]=max(mpp[dsum],num);
                }else{
                    mpp[dsum]=num;
                }
            }
            return sum;
        }
        int DigitSum(int num){
            int dsum=0;
            while(num>0){
                dsum=dsum+num%10;
                num=num/10;
            }
            return dsum;
        }
    };