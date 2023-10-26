class Solution {
public:
    int dpMemo(vector<int>& nums, int target, vector<int>& dp){
        if(target == 0) return 1;
        if(target < 0) return 0;
        if(dp[target] != -1) return dp[target];
        int count  = 0;
        for (int i = 0; i < nums.size(); i++) {
            count += dpMemo(nums, target - nums[i], dp);
        }
        return dp[target] = count;
    }
    int findCombi(int index, vector<int>& nums, int target){
        if(target == 0) return 1; // valid case add count
        if(index >= nums.size() || target < 0) return 0; // invalid case;
        int count  = 0;
         for (int i = 0; i < nums.size(); i++) {
            count += findCombi(index, nums, target - nums[i]);
        }
        return count;
    } 
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target + 1, -1);
        return dpMemo(nums, target, dp);
    }
};