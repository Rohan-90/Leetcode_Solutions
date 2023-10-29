class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int maxLen = 0;
        int j = 0;
        for(int i = 0; i < s.length(); i++){
            if(mp.find(s[i]) != mp.end()) j = max(j ,mp[s[i]] + 1);
            mp[s[i]] = i;
            int length = i - j + 1;
            maxLen = max(length, maxLen);  
        }
        return maxLen;
    }
};