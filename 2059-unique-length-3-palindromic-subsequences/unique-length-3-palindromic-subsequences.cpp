class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<pair<int,int>> letters(26, {-1,-1});
        int res = 0;
        for(int i = 0; i < s.size(); i++) {
            int num = s[i] - 'a';
            if(letters[num].first == -1) letters[num].first = i;
            letters[num].second = i;
        }
        
        for(int i = 0; i < 26; i++) {
            int leftIndex = letters[i].first;
            int rightIndex = letters[i].second;

            if(leftIndex == -1) continue;
            
            unordered_set<char> countPalindrome;
            for(int i = leftIndex + 1; i <= rightIndex - 1; i++) {
                countPalindrome.insert(s[i]);
            }    
            res += countPalindrome.size();
        }
        return res;
        // unordered_set<char> st;
        // int ans = 0;
        // for(auto c : s) st.insert(c);
        // for(char c : st) {
        //     int leftIndex = -1, rightIndex = -1;
        //     for(int i = 0; i < s.length(); i++) {
        //         if(s[i] == c) {
        //             if(leftIndex == -1) leftIndex = i;
        //             rightIndex = i;
        //         }
        //     }
        //     unordered_set<char> countPalindrome;
        //     for(int i = leftIndex + 1; i <= rightIndex - 1; i++) {
        //         countPalindrome.insert(s[i]);
        //     }    
        //     ans += countPalindrome.size();
        // }
        // return ans;
    }
};