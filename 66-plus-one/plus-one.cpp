class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> ans(digits);
        int increment = 0;
        while(n--) {
            if(digits[n] == 9) {
                    ans[n] = 0;
                if(n == 0) {
                    ans.insert(ans.begin(), 1);
                }
            }
            else {
                ans[n] = digits[n] + 1;
                return ans;
            }
        }
        return ans;
    }
};