class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long product = (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);
        return (int)product;
    }
};