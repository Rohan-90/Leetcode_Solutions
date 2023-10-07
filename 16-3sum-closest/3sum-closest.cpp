class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int ans = 100000;
    int n = nums.size();
    int i = 0;
    while (i < n - 2) {
        int start = i + 1;
        int end = n - 1;
        while (start < end) {
            int sum = nums[i] + nums[start] + nums[end];
            if (sum == target) return sum;
            if (abs(sum - target) < abs(ans - target)) ans = sum;
            if (sum > target) end--;
            else start++;  
        }
        i++;
    }
    return ans;
    }
};