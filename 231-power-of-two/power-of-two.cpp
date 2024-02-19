class Solution {
public:
    bool isPowerOfTwo(int n) {
        unsigned long long ans = 0;
        for(int i = 0; i < 50; i++){
            ans = pow(2,i);
            if(ans == n) return true;
        }
        return false;
    }
};