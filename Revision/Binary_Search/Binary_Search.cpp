#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution{
    int BinarySearch(vector<int>&arr,int target){
        int low=0,high=arr.size()-1;
        while( low <= high){
            int mid=(low+high)/2;
            if(arr[mid]==target) return mid;
            else if (arr[mid]>target){ high=mid-1;}
            else low=mid+1;
        }
    }
};

int main(){
    Solution sol;
    vector<int>arr={5,3,4,6,7,2,78,9,9,54};
    return sol.BinarySearch(arr,78);



}