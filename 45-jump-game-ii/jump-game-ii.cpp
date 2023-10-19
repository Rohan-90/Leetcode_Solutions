class Solution {
public:
  int dpMemo(vector<int>& nums, int index, int n, vector<int>& dp) {
    if (index == n - 1) return 0;  // Already at the end of the array.
    if (nums[index] == 0) return INT_MAX;  // Cannot move forward from this position.
    if (dp[index] != -1) return dp[index];  // Return memoized result if available.

    int minJumps = INT_MAX;

    for (int i = 1; i <= nums[index] && index + i < n; i++) {
        int jumps = dpMemo(nums, index + i, n, dp);
        if (jumps != INT_MAX) {
            minJumps = min(minJumps, 1 + jumps);
        }
    }

    dp[index] = minJumps;  // Memoize the result.
    return minJumps;
}
    int recursive(vector<int>& nums, int index, int n){
        if(index == n) return 0;
        if(nums[index] == 0 && index > nums.size()) return INT_MAX;
        int minJumps = INT_MAX;
        for(int i = 1; i <= nums[index]; i++){
           int jumps = recursive(nums,index + i, n);
           if(jumps != INT_MAX) minJumps  = min(1 + jumps, minJumps);
        }
        return minJumps;
    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(), -1);
        return dpMemo(nums, 0 , nums.size(), dp);
    }
};