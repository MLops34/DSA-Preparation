// n to 1

class Solution {
  public:
    void printGfg(int N) {
        // Code here
        string res="GFG";
        if(N>0){
            cout << res << " ";
            N--;
            printGfg(N-1);
        }
    }
};

// GFG

class Solution {
  public:
    // Complete this function
    int cnt=1;
    void printNos(int n) {
        if(cnt<=n){
            cout<< cnt << " ";
            cnt++;
            printNos(n);
        }
        
        
        // Your code here
    }

// 1 to N

class Solution {
  public:
    void printNos(int N) {
        // code here
        if(N!=0){
            cout << N <<" ";
            printNos(N-1);
        }
    }
};

// Sum

class Solution {
  public:
    int sum=0;
    int sumOfSeries(int n) {
        if(n==0) return 0;
        else {
            return n*n*n + sumOfSeries(n-1);
        }
        
    }
};
// factorial <=n

class Solution {
  public:
    vector<long long> factorialNumbers(long long n,long long x=1,vector<long long>ans={},long long a=1){
        // Write Your Code here
        if(x>n) return ans;
        else{
            ans.push_back(x);
            return factorialNumbers(n,x*(a+1),ans,a+1);
        }
    }
};

// reverse array

void reverseArray(vector<int> &arr,int x=0,int i=1) {
        // code here
        if( x < arr.size()/2 ){
            swap(arr[arr.size()-i],arr[x]);
            reverseArray(arr,x+1,i+1);
        }
        
    }