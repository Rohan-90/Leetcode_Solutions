class Solution {
public:
   
    int partitionString(string s) {
        unordered_map<char,int> st;
        int count = 1;
        for(int i = 0; i < s.length(); i++){
            if(st.find(s[i]) != st.end()){
                count++;
                st.clear();
                st[s[i]]++;
            }
            else st[s[i]]++;
        }
        return count;
    }
};