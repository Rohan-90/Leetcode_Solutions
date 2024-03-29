class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans = 0;
        int i = 0, j = 0;
        int maxi = *max_element(nums.begin(), nums.end());
        int cnt = 0;
        while(j < nums.size()){
            if(nums[j] == maxi) cnt++;
            while(cnt >= k){
                if(nums[i] == maxi) cnt--;
                i++;
                ans += nums.size() - j;
            }
            j++;
        }
        return ans;
    }
};