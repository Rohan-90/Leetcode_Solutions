class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long totalPairs = (nums.size() * (nums.size() - 1)) / 2;
        long long goodPairs = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {    
            if(mp.find(nums[i] - i) != mp.end()) {
                goodPairs += mp[nums[i] - i];
            }
            mp[nums[i] - i]++;
        }
        return totalPairs - goodPairs;
    }
};