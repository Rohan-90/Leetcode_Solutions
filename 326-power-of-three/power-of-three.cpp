class Solution {
public:
    bool isPowerOfThree(int n) {
        // long long power = 0;
        // for(int i = 0; i < 40; i++) {
        //     power = pow(3,i);
        //     if(power == n) return true;
        // }
        // return false;
        if(n <= 0) return false;
        while(n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};