class Solution {
public:
    void twoSum(vector<int>& nums, int start, int end, int& target, vector<vector<int>>& ans) {
        while(start < end) {   
            if(nums[start] + nums[end] > target) end--;
            else if(nums[start] + nums[end] < target) start++;
            else {
                while(start <  end && nums[start] == nums[start + 1]) start++;
                while(start <  end && nums[end] == nums[end - 1]) end--;

                if(nums[start] + nums[end] == target) {
                ans.push_back({-target, nums[start], nums[end]});
                start++;
                end--;
                }
            }
        }
    } 
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.size() < 3) return {};
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; i++) {
            int target = -nums[i];
            if(i > 0 && target == -nums[i - 1]) continue;
            twoSum(nums, i + 1, nums.size() - 1, target, ans);  
        }
        return ans;
    }
};