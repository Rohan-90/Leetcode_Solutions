class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        int count = 1;
        int digit = 0;
        int maxNum = INT_MIN;
        for(int i = 1; i < num.size(); i++){
            if(num[i-1] == num[i]) count++;
            else count = 1;
            if(count == 3){
                digit = count;
                int currDigit = num[i] - '0';
                maxNum = max(currDigit, maxNum); 
            }
        }
        char nums = maxNum + '0';
        if(digit == 3){
            ans.push_back(nums);
            ans.push_back(nums);
            ans.push_back(nums);
        }
        return ans;
    }
};