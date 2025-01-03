class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long sum = 0, count = 0;
        vector<long> prefix(nums.size());
        for(int i = nums.size() - 1; i >= 0; i--) {
            sum += nums[i];
            prefix[i] = sum; 
        }
        sum = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            sum += nums[i];
            if(sum >= prefix[i + 1]) count++;
        }
        return count;
    }
};