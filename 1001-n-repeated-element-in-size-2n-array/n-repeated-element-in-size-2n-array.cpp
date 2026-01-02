class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = -1;
        for(auto it: nums) {
            mp[it]++;
        }
        for(auto it : mp) {
            if(it.second == (nums.size() / 2)) return it.first;
        }
        return ans; 
    }
};