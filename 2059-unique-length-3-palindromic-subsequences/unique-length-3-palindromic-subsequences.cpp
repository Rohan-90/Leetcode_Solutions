class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char> st; 
        int ans = 0;
        for(auto c : s) st.insert(c);
        for(char c : st) {
            int leftIndex = -1, rightIndex = -1;
            for(int i = 0; i < s.length(); i++) {
                if(s[i] == c) {
                    if(leftIndex == -1) leftIndex = i;
                    rightIndex = i;
                }
            }
            unordered_set<char> countPalindrome;
            for(int i = leftIndex + 1; i <= rightIndex - 1; i++) {
                countPalindrome.insert(s[i]);
            }    
            ans += countPalindrome.size();
        }
        return ans;
    }
};