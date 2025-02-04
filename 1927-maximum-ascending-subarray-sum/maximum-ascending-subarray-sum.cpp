class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = 0, sum = 0, prev = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > prev) sum += nums[i];
            else sum = nums[i];
            
            prev = nums[i];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};