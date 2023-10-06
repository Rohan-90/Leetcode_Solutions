class Solution {
public:
    int bitwiseComplement(int n) {
        vector<int> ans;
        if(n == 0) return 1;
        while(n){
            if(n % 2 == 0) ans.push_back(0);
            else ans.push_back(1);
            n /= 2;
        }
        for(int i = 0; i < ans.size(); i++) {
            if(ans[i] == 1) ans[i] = 0;
            else if(ans[i] == 0) ans[i] = 1;
        }
        int res = 0;
        for(int i = 0; i < ans.size(); i++){
            res += pow(2,i) * ans[i];
        }
        return res;
    }
};