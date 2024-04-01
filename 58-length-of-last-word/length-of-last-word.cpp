class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0, space = 0, sc = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == ' ' && space == 0) sc++;
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
                space = 1;
                ans = s.size() - i - sc;
            }
            if(s[i] == ' ' && space == 1) break;
        }
        return ans;
    }
};