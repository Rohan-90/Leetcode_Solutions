class Solution {
public:
    string makeGood(string s) {
        int i = 0;
        string ans = "";
        stack<char> st;
        while(i < s.size()){
            if(s[i] >= 'A' && s[i] <= 'Z' && !st.empty() && st.top() >= 'a' && st.top() <= 'z'  && toupper(st.top()) == s[i]){
                st.pop();
            }
            else if(s[i] >= 'a' && s[i] <= 'z' && !st.empty() && st.top() >= 'A' && st.top() <= 'Z' && tolower(st.top()) == s[i]){
                st.pop();   
            }
            else st.push(s[i]);
            i++;
        }
        while(!st.empty()){
            char ch = st.top();
            ans = ch + ans;
            st.pop(); 
        }
        return ans;
    }
};