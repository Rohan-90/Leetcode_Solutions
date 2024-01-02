class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int,int> mp;
        for(auto it : nums) mp[it]++;
        while(!mp.empty()){
            vector<int> temp, Erase;
            for(auto &[f,s] : mp){
                temp.push_back(f);
                s--;
                if(s == 0) Erase.push_back(f);
            }
            ans.push_back(temp);        
            for(auto it : Erase) mp.erase(it);
        }
        return ans;
    }
};