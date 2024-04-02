class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int cnt1 = 1, cnt2 = 1;
        unordered_map<char,char> m1, m2;
        for(int i = 0; i < s.size(); i++){
            if(m1.find(t[i]) != m1.end() && m1[t[i]] != s[i]) return false;
            if(m2.find(s[i]) != m2.end() && m2[s[i]] != t[i]) return false;
            m1[t[i]] = s[i];
            m2[s[i]] = t[i];
        }
        return true;
    }
};