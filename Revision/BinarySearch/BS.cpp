#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    int BinarySearch(vector<int>& arr, int target){
        int low = 0, high = arr.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5};
    int ans = sol.BinarySearch(arr, 5);
    cout << "Answer: " << ans << endl;
    return 0;
}
