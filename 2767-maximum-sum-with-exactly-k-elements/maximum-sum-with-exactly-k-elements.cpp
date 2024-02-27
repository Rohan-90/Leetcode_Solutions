class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int maxi = nums[nums.size() - 1];
        int ans = 0;
        while(k != 0){
            ans += maxi;
            maxi += 1;
            k--;
        }
        return ans;
    }
};