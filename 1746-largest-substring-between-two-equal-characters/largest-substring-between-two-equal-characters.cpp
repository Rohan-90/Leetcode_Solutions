class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxLen  = -1;
       for(int  i = 0 ; i < s.size(); i++){
           int len  = -1;
           for(int j = i + 1; j < s.size(); j++){
               if(s[i] == s[j]) len = j - i - 1;
               maxLen = max(maxLen, len);
           }
       }
       return maxLen;
    }
};