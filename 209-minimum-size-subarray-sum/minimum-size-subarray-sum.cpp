class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, minLength = INT_MAX, low = 0;
        for(int  high = 0; high < nums.size(); high++) {
            sum += nums[high];
            while(sum >= target) {
                minLength = min((high - low + 1), minLength);
                sum -= nums[low];
                low++;
            }
        }
        return (minLength == INT_MAX) ? 0 : minLength;
    }
};