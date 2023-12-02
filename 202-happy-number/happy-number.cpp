class Solution {
public:
    bool isHappy(int n) {
        while(true){
            if(n == 1 || n == 7) return true;
            if(n > 1 && n < 10) return false;
            long long ans = 0;
            while(n){
                int mod = n % 10;
                ans += pow(mod,2); 
                n = n / 10;
            }
            n = ans;
        }
        return true;
    }
};