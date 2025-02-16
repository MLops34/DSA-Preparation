class Solution{
    public:
      // Complete this function
      int sum=0;
      int sumOfDigits(int n)
      {
          //Your code here
          
          int rem=n %10;
          sum=sum+rem;
          
          if(n/10==0) return sum;
          
          sumOfDigits(n/10);
          
      }
  };