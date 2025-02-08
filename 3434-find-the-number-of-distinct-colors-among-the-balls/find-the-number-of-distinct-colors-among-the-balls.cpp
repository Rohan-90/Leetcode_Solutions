class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        vector<int> ans;
        unordered_map<int,int> counts;
        unordered_map<int,int> prevColor;
        for(int i = 0; i < queries.size(); i++) {
            int ball = queries[i][0];
            int color = queries[i][1];
            if(prevColor.count(ball)) {
                int prev = prevColor[ball];
                counts[prev]--;
                if(counts[prev] == 0) counts.erase(prev);
            }
            prevColor[ball] = color;
            counts[color]++;
            ans.push_back(counts.size());
        }
        
        return ans;
    }
};
