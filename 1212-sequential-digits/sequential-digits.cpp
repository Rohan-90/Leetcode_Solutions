class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for(int i = 1; i <= 9; i++){
            int digit = i;
            int nextDigit = i + 1;
            while(digit <= high && nextDigit <= 9){
                digit = digit * 10 + nextDigit;
                if(digit >= low && digit <= high) ans.push_back(digit);
                nextDigit++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};