class Solution {
public:
    int solve(int x){
        int ans = 0;
        while(x){
            int mod = x % 10;
            ans = mod + ans * 10;
            x = x / 10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        int mod = 1e9 + 7;
        unordered_map<int,int> mp;
        for(auto it : nums) mp[it - solve(it)]++;
        long long count = 0;
        for(auto num : mp){
            count = ((count % mod) + (long long)num.second * (num.second - 1)/ 2) % mod;
        }
        return count;
    }
};