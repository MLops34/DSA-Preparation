class Solution {
    public:
        bool checkPowersOfThree(int n) {
            while(n>0){
                int cnt=0,sum=0;
                int rem=n%3;
                if(rem==2) return false;
                n=n/3;
            }   
            return true;
        }
    };