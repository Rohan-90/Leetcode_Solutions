class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int ans = 0;
        int n = words.size();
        for(int i = 0; i < words.size(); i++){
            ans += words[i].size();
        }
        if(ans % n != 0) return false;

        vector<int> chr(26, 0);
        for(auto it : words){
            for(auto c : it) chr[c - 'a']++;
        }

        for(auto it : chr){
            if(it % n != 0) return false;
        }
        return true;
    }
};