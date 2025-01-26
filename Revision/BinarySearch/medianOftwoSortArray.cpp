class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        
        if (n1 > n2) return findMedianSortedArrays(nums2, nums1);
        
        int n = n1 + n2;
        int low = 0, high = n1;
        int left = (n + 1) / 2;
        int l1 = INT_MIN, l2 = INT_MIN, r1 = INT_MAX, r2 = INT_MAX;

        while (low <= high) {
            int mid1 = (low + high) / 2;
            int mid2 = left - mid1;

            
            if (mid1 > 0) l1 = nums1[mid1 - 1];
            else l1 = INT_MIN;

            if (mid1 < n1) r1 = nums1[mid1];
            else r1 = INT_MAX;

            if (mid2 > 0) l2 = nums2[mid2 - 1];
            else l2 = INT_MIN;

            if (mid2 < n2) r2 = nums2[mid2];
            else r2 = INT_MAX;


            if (l1 <= r2 && l2 <= r1) {
                if (n % 2 == 1) {
                    return max(l1, l2);
                } else {
                    return (double)(min(r1, r2) + max(l1, l2)) / 2.0;
                }
            } else if (l1 > r2) {
                high = mid1 - 1;
            } else {
                low = mid1 + 1;
            }
        }
        return 0.0;
    }
};