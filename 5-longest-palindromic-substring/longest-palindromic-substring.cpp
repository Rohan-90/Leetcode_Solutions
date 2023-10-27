class Solution {
public:
    int Palindromic(string s, int i, int j){
        while( i >= 0 && j <s.length() && s[i] == s[j]){
                i--;
                j++;
        }
        return  j - i - 1;
    }
    string longestPalindrome(string s) {
        int maxLen = 0;
        int start = 0;
        for(int i = 0; i < s.length(); i++){
            int j = i;
            int len1 = Palindromic(s, i, j);
            j = i+1;
            int len2 = Palindromic(s, i, j);
            int len = max(len1, len2);
            if(len > maxLen) {
                maxLen = len;
                start = i -(len-1)/2;
            }
        }
        return s.substr(start,maxLen);
    }
};