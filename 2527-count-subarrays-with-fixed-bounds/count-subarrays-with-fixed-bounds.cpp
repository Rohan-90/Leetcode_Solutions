class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int minInd = -1, maxInd = -1, culpInd = -1;
        for(int  i = 0; i < nums.size(); i++){
            if(nums[i] > maxK || nums[i] < minK) culpInd = i;
            if(nums[i] == minK) minInd = i;
            if(nums[i] == maxK) maxInd = i;
            long long smaller = min(minInd, maxInd);
            long long temp = smaller - culpInd;
            if(temp <= 0) ans += 0;
            else ans += temp;
        }
        return ans;
    }
};