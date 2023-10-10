class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp;
        for(auto it : s1){
            mp[it]++;
        }
        int i = 0;
        int j = 0;
        int windowSize = s1.length();
        int count = mp.size();
        while(j < s2.length()){
            if(mp.find(s2[j]) != mp.end()){
                mp[s2[j]]--;
                if(mp[s2[j]] == 0) count--;
            }
            if(j - i + 1 < windowSize) j++;
            else if(j-i+1 == windowSize){
                if(count == 0) return true;
                if(mp.find(s2[i]) != mp.end()){
                    mp[s2[i]]++;
                    if(mp[s2[i]] == 1) count++;
                }
            i++;
            j++;
            }
        }
        return false;
    }
};