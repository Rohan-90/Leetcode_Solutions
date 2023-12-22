class Solution {
public:
    int maxScore(string s) {
        int maxi = INT_MIN;
        int countZero = 0;
        int countOne = count(s.begin(), s.end(), '1');
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == '0') countZero++;
            else if(s[i] == '1') countZero--;
            maxi = max(maxi, countZero + countOne);
        }
        return maxi;
    }
};