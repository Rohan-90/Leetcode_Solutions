class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long largest = nums[nums.size() - 1] * nums[nums.size() - 2];
        long long smallest = nums[0] * nums[1];
        return largest - smallest;
    }
};