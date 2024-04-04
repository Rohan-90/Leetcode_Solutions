class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans = 0, i = 0, count = 0;
        while(i < s.size()){
            if(s[i] == '('){
                st.push(s[i]);
                count++;
                ans = max(ans, count); 
            }
            else if(s[i] == ')' && st.top() == '(') count--;
            i++;
            ans = max(ans, count);
        }
        return ans;
    }
};