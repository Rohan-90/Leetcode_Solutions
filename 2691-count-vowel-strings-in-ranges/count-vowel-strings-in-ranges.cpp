class Solution {
public:
    bool checkVowels(char start, char end) {
        if((start == 'a' || start == 'e' || start == 'i' || start == 'o' || start == 'u') && 
            (end == 'a' || end == 'e' || end == 'i' || end == 'o' || end == 'u')) {
                return true;
            }
        return false;    
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> cumSum(words.size());
        int count = 0;
        for(int i = 0; i < words.size(); i++) {
            if(checkVowels(words[i][0], words[i][words[i].size() - 1])) count += 1;
            cumSum[i] = count;
        }

        for(int i = 0; i < queries.size(); i++) {
            int left = queries[i][0];
            int right = queries[i][1];
            if(left == 0) ans.emplace_back(cumSum[right]);
            else {
                int diff = cumSum[right] - cumSum[left - 1];
                ans.emplace_back(diff);
            } 
        }
        return ans;
    }
};