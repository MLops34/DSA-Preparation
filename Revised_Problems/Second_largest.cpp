#include<bits/stdc++.h>
using namespace std;

int secLarge(int arr[],int n){
    if(n<2){
        return -1;
    }
    int large=INT_MIN,seclarge=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            seclarge=large;
            large=arr[i];
        }
        else if (arr[i]<seclarge && arr[i]!=large){
            seclarge=arr[i];
        }
    }
    if(seclarge==INT_MIN){
        return -1;
    }

    return seclarge;
}

int main(){
    int arr[]={1,2,4,5,7,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int second=secLarge(arr,n);
    cout << "Second Largest is ::" << second << endl;
    return 0;
}