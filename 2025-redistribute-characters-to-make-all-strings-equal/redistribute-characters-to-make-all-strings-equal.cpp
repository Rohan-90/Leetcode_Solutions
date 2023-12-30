class Solution {
public:
    bool makeEqual(vector<string>& words) {
        string ans = "";
        int n = words.size();
        for(int i = 0; i < words.size(); i++){
            ans += words[i];
        }
        if(ans.size() % n != 0) return false;

        unordered_map<char, int> hmp;
        for(auto it : ans) hmp[it]++;

        for(auto it : hmp){
            if(it.second % n != 0) return false;
        }
        return true;
    }
};