class Solution {
public:
    string reverseWords(string s) {
        string word ="";
        string ans = "";
        for(auto it : s){
            if(it != ' ') word += it;
            else{
                reverse(word.begin(),word.end());
                ans += word + " ";
                word = "";
            }
        }
        reverse(word.begin(),word.end());
        ans = ans + word;
        return ans;
        
        /*
        int start = 0;
        int end = 0;
        int n = s.length();
        while(end < n){
            while(end < n && s[end] != ' ') end++;
            reverse(s.begin() + start, s.begin() + end);
            while(end < n && s[end] == ' ') end++;
            start = end;
        }
        return s;*/
    }
};