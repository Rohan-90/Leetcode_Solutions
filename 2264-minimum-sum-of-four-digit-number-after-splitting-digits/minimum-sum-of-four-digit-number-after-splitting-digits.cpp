class Solution {
public:
    int minimumSum(int num) {
        vector<int> ans(4,0);
        for(int i = 0; i < 4 ; i++){
            int mod = num % 10;
            ans[i] = mod;
            num /= 10;
        }
        sort(ans.begin(), ans.end());
        int res = ((10 * ans[0]) + ans[2]) + ((10 * ans[1]) + ans[3]);
        return res;
    }
};