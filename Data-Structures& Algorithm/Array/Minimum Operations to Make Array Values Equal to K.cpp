class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            unordered_set<int> st;
            for(int& item : nums){
                if(item<k) return -1;
                if(item>k){
                    st.insert(item);
                }
            }
            return st.size();
        }
    };  