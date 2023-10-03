class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        sort(nums.begin(),nums.end());
        int maxGap = INT_MIN;
        int n = nums.size();
        for(int i = 1; i < n; i++){
            int gap = nums[i] - nums[i-1];
            maxGap = max(maxGap,gap);
        }
        return maxGap; 
    }
};