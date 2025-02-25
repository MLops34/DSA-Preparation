class Solution {
    public:
        int numOfSubarrays(vector<int>& arr) {
            long long ans=1000000007;
            long long odd=0,eve=1,prefix=0,result=0;
            for(int num: arr){
                prefix+=num;
                if(prefix%2==1){
                    result+=eve;
                    odd++;
                }else{
                    result+=odd;
                    eve++;
                }
            }
            return result%ans;
    
        }
    };  