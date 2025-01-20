class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        for(int i=0;i<fact(nums.size());i++){
            ans.push_back(NextPermutation(nums));
        }
        return ans;
    }

vector<int> NextPermutation(vector<int>& nums){
    int n=nums.size();
    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index=i;
            break;
        }
    }
    for(int i=n-1;i>=index && index!=-1 ;i--){
        if(nums[i]>nums[index]){
            swap(nums[i],nums[index]); break;
        }
    }
    reverse(nums.begin()+index+1,nums.end());

    return nums;
}

int fact(int n){
    int f=1;
    while(n>=1){
        f=f*n;
        n--;
    }
    return f;
}

};