class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x){
            int mod = x % 10;
            if(ans > INT_MAX/10 || ans < INT_MIN / 10) return 0;
            ans = (ans * 10) + mod;
            x = x / 10;
        }
        // ans * 10 + mod > INT_MAX then 
        // ans > (INT_MAX - mod) / 10; as mod range is 0-9 
        //(0-9)/ 10 is 0 in int  so the total equation we can write is ans > INT_MAX/10 
        // ans < INT_MIN/10
        // same case in case of INT_MIN 
        return ans;
    }
};