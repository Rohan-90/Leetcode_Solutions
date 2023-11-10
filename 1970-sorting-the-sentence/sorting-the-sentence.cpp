class Solution {
public:
    string sortSentence(string s) {
        string ans = "";
        map<int, string> mp;
        istringstream ss(s);
        string words;
        while(ss >> words){
            int num = words[words.size() - 1];
            words.pop_back();
            mp[num] = words;
        }
        for(auto it : mp){
            ans += it.second;
            ans += " ";
        }
        ans.pop_back();
        return ans;
    }
};