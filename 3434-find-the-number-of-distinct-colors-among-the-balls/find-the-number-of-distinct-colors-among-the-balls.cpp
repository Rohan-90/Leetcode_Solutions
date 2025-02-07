class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_set<int> distinct;
        vector<int> ans;
        unordered_map<int, int> mp;
        unordered_map<int, int> freq;

        for (int i = 0; i < queries.size(); i++) {
            int key = queries[i][0];
            int value = queries[i][1];

            if (mp.find(key) != mp.end()) {
                int oldValue = mp[key];
                freq[oldValue]--;
                if (freq[oldValue] == 0) distinct.erase(oldValue);
            }

            mp[key] = value;
            freq[value]++;
            distinct.insert(value);
            ans.push_back(distinct.size());
        }
        return ans;
    }
};
