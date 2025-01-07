class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        unordered_set<string> st;
        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words.size(); j++) {
                if(i == j) continue;
                if(words[j].find(words[i]) != string::npos) {
                    st.insert(words[i]);
                } 
            }
        }
        for(auto it : st) ans.push_back(it);
        return ans;
    }
};