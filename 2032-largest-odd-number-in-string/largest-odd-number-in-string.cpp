class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int maxi = INT_MIN;
        int j = 0;
        for(int i = num.size() - 1; i >= 0; i--){
            int ch = num[i] - '0';
            if(ch % 2 == 1){
                ans += num.substr(j, i - j + 1);
                break;
            }    
        }
        return ans;
    }
};