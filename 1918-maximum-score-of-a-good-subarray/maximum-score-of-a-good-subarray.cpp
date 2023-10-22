class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int ans = nums[k];
        int mini = nums[k];
        int i = k;
        int j = k;
        while(i > 0 || j < nums.size() - 1){
            if(i == 0) j++;
            else if(j == nums.size() - 1) i--;
            else if(nums[i-1] < nums[j+1]) j++;
            else i--;
            mini = min(mini, min(nums[i],nums[j]));
            ans = max(ans, mini * (j - i + 1));
        }
        return ans;
    }
};