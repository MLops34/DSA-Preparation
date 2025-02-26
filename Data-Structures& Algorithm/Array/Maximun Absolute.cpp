int n = nums.size();

int currSubSum = nums[0];
int maxSubSum = nums[0];

//Kadane's Algo for findig max subarray sum
for(int i = 1; i < n; i++) {
    currSubSum = max(nums[i], currSubSum + nums[i]);
    maxSubSum = max(maxSubSum, currSubSum);
}

//Kadane's Algo for findig min subarray sum
int minSubSum = nums[0];
currSubSum = nums[0];
for(int i = 1; i < n; i++) {
    currSubSum = min(nums[i], currSubSum + nums[i]);
    minSubSum = min(minSubSum, currSubSum);
}

return max(maxSubSum, abs(minSubSum));  s