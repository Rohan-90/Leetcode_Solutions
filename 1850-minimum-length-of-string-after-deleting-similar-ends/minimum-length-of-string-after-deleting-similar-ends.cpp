class Solution {
public:
    int minimumLength(string s) {
        if(s.size() == 1) return 1;
        int start = 0, end = s.size() - 1;
        while(start < end && s[start] == s[end]){
            char ch = s[start];
            while(start < end && s[start] == ch) start++;
            while(start <= end && s[end] == ch) end--;
        }
        //if(start == end) return 0;
        return end - start + 1;
    }
};