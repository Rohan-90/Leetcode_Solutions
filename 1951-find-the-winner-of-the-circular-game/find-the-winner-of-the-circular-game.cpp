class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> ans;
        for(int i = 1; i <= n; i++) ans.emplace_back(i);
        int i = 0;
        while(ans.size() != 1){
            i += k -1;
            i %= ans.size();
            ans.erase(ans.begin() + i);
        }
        return ans[0];
    }
};