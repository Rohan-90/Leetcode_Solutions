class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> magz(26, 0);
        vector<int> ransom(26, 0);
        for(auto ch : magazine) magz[ch - 'a']++;
        for(auto it : ransomNote){
            int num = it - 'a';
            ransom[num]++;
            if(ransom[num] > magz[num]) return false;
            
        }
        return true;
    }
};