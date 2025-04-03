// TIME--( O(N) SPACE--O(N) )
// class Solution {
//     public:
//         long long maximumTripletValue(vector<int>& nums) {
//             int n=nums.size();
//             vector<int> leftsum(n);
//             leftsum[0]=0;
//             vector<int> Rightsum(n);
//             Rightsum[n-1]=0;
//             for(int i=1;i<n;i++){
//                 leftsum[i]=max(leftsum[i-1],nums[i-1]);
//             }
//             for(int i=n-2;i>=0;i--){
//                 Rightsum[i]=max(Rightsum[i+1],nums[i+1]);
//             }
//             long long result=0;
//             for(int i=0;i<n;i++){
//                 result=max(result, (long long)(leftsum[i]-nums[i])*Rightsum[i] );
//             }
//             return result;
//         }
//     };

