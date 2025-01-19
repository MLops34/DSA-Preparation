#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>

using namespace std;

class Solution{
    public:
    int BetterMaxiSubArray(vector <int> &arr){
        int n=arr.size(); 
        long long maxi=INT_MIN; 
        int sum=0;
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=i;j<n;j++){
                sum=sum+arr[j];
                if(sum>maxi){
                    maxi=sum;
                }
            }
        }
        return maxi;
    }
};

int main()
{
    Solution sol;
    vector<int>arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    long long maxSum = sol.BetterMaxiSubArray(arr);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}