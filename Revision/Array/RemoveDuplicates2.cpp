class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n=nums.size();
        unordered_map<int,int>hash;
        int index=0;
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
            if(hash[nums[i]]<=2){
                nums[index++]=nums[i];
            }
            else{
                hash[nums[i]]--;
            }
        }
        return index;        
    }
};