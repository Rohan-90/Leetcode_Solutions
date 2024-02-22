class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size() == 0 && n == 1) return n;
        vector<int> store(n+1, 0);
        for(auto it : trust){
            store[it[0]]--;
            store[it[1]]++;
        }

        int ans = -1;
        for(int i = 0; i <= n; i++){
            if(store[i] == n -1) return i;
        }
        return -1;
        /*unordered_map<int,int> mp;
        for(int i = 0; i < trust.size(); i++) mp[trust[i][0]]++;
        
        for(int i = 0; i < trust.size(); i++){
            if(mp.find(trust[i][1]) == mp.end()) return trust[i][1];
        }
        return -1;*/
    }
};