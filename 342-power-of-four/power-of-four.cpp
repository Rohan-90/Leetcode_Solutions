class Solution {
public:
    bool isPowerOfFour(int n) {
        long long ans = 0;
        for(int i = 0; i < sqrt(n); i++){
            ans = pow(4,i);
            if( ans == n) return true;
            if(ans > n) return false;
        }
        return false;
    }
};