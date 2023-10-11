class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        int maxLen = 0;
        int n = s.length();
        int start = 0;
        for(int index = 0; index < n; ++index){
            if(s[index] == '(') st.push(index);
            else{
                if(st.empty()) start = index + 1;
                else{
                    st.pop();
                    if(st.empty()) maxLen = max(maxLen, index - start + 1);
                    else maxLen= max(maxLen , index - st.top());
                }
            }
        }
        return maxLen;
    }
};