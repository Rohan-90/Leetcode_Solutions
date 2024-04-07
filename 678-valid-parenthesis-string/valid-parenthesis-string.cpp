class Solution {
public:
    bool checkValidString(string s) {
        int l = 0, r = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                l++;
                r++;
            }
            else if(s[i] == ')'){
                l--;
                r--;
            }
            else if(s[i] == '*'){
                l--;
                r++;
            }
            if(r < 0) return false;
            if(l < 0) l = 0;
        }
        if(l == 0) return true;
        return false;
    }
};