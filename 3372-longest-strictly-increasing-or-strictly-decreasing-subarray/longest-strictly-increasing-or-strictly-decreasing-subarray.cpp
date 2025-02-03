class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxLen = 1, decLen = 1, incLen = 1;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] > nums[i + 1]){
                decLen++;
                incLen = 1;
            } 
            else if(nums[i] < nums[i + 1]){
                incLen++;
                decLen = 1;
            }
            else {
                incLen = 1;
                decLen = 1;
            }
            maxLen = max(maxLen, max(decLen, incLen));
        }
        return maxLen;
        
    }
};