class ProductOfNumbers {
    public:
        vector<int>nums;
        int n;
        ProductOfNumbers() {
            nums.clear();
            n=0;
        }
        
        void add(int num) {
            nums.push_back(num);
        }
        
        int getProduct(int k) {
            int res=1,n=nums.size();
            for(int i=n-k;i<n;i++){
                res*=nums[i];
            }
            return res;
        }
    };
    
    /**
     * Your ProductOfNumbers object will be instantiated and called as such:
     * ProductOfNumbers* obj = new ProductOfNumbers();
     * obj->add(num);
     * int param_2 = obj->getProduct(k);
     */