class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> pat;
        map<string,char> st;
        vector<string> str;
        stringstream ss(s);
        string word;
        while(ss >> word) str.emplace_back(word);
        if(pattern.size() != str.size()) return false;

        for(int i = 0; i < str.size(); i++) {
            char ch = pattern[i];
            string words = str[i]; 
            if(pat.count(ch) && pat[ch] != words) return false;
            if(st.count(words) && st[words] != ch) return false;


            pat[ch] = words;
            st[words] = ch; 
        }
        

        return true;
    }
};