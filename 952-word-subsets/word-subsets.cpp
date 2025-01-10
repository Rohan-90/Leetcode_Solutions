class Solution {
public:
    bool isSubset( vector<char>& arr1,  vector<char>& temp) {
        for(int i = 0; i < 26; i++) {
            if(arr1[i] > temp[i]) return false;
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        vector<char> arr1(26,0);
        for(auto it : words2) {
            vector<char> temp(26, 0);
            for(auto ch : it) {
                temp[ch - 'a']++;
                arr1[ch - 'a'] = max(arr1[ch - 'a'], temp[ch - 'a']);
            }
        }
        for(auto it : words1) {
            vector<char> temp(26, 0);
            for(auto ch : it) {
                temp[ch - 'a']++;
            }
            if(isSubset(arr1, temp)) ans.push_back(it);
        }
        return ans;
    }
};