class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        for(auto it : t) m[it]++;

        for(int i = 0; i < s.length(); i++){
            if(m.find(s[i]) != m.end() && m[s[i]] > 0){
                m[s[i]]--;
            }
            else return false;
        }
        for(auto it: m){
            if(it.second != 0) return false;
        }
        return true;
    }
};