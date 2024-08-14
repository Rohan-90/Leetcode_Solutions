class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int diff = 0;
        int maxi = *max_element(nums.begin(), nums.end());
        vector<int> check(maxi + 1, 0);
        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                diff = abs(nums[i]- nums[j]); 
                check[diff] += 1;
            }
        }
        for(int i = 0; i < check.size(); i++){
            k -= check[i];
            if(k <= 0) return i;
       }
        return -1;
    }
};