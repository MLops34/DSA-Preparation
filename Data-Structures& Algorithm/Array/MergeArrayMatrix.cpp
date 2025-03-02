#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> mergeArrays(std::vector<std::vector<int>>& nums1, std::vector<std::vector<int>>& nums2) {
        std::vector<std::vector<int>> result;
        int i = 0, j = 0;
        int n = nums1.size();
        int m = nums2.size();

        // Merge the two arrays
        while (i < n && j < m) {
            if (nums1[i][0] < nums2[j][0]) {
                result.push_back(nums1[i]);
                i++;
            } else if (nums1[i][0] > nums2[j][0]) {
                result.push_back(nums2[j]);
                j++;
            } else { // nums1[i][0] == nums2[j][0]
                result.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++;
                j++;
            }
        }

        // Add remaining elements from nums1
        while (i < n) {
            result.push_back(nums1[i]);
            i++;
        }

        // Add remaining elements from nums2
        while (j < m) {
            result.push_back(nums2[j]);
            j++;
        }

        return result;
    }
};