class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for(auto it : words) {
            if(it.find(pref) == 0) ans++;
        }
        return ans;
    }
};