class Solution {
public:
    void generate(vector<string> &ans, string s, int open, int closed, int n){
        if(s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }
        if(open < n) generate(ans, s+'(', open + 1, closed, n);
        if(closed < open) generate(ans, s+')', open, closed + 1, n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(ans, "", 0, 0, n);
        return ans;
    }
};