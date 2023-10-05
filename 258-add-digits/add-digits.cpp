class Solution {
public:
    int addDigits(int num) {
        while(num > 9){
            int ans = 0;
            while(num){
            int mod = num % 10;
            ans = ans + mod;
            num = num / 10;  
            }
            num = ans;
        }
        return num;  
    }
};