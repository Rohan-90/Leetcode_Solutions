class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxi = 0;
        for(auto it : nums){
            mp[it]++;
            maxi = max(maxi, mp[it]);
        }
        vector<vector<int>> ans(maxi);
        for(auto it : mp){
            int cnt = it.second;
            for(int i = 0; i < cnt; i++){
                ans[i].push_back(it.first);
            }
        }
        return ans;
    }
};