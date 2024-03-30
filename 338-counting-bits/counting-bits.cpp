class Solution {
public:
    int solve(int a){
        int count = 0;
        while(a){
            if(a % 2 == 1) count++;
            a /= 2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++){
            int num = solve(i);
            ans.emplace_back(num);
        }
        return ans;
    }
};