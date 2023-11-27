class Solution {
public:
    int hammingWeight(uint32_t n) {
        /*int mod = 1e9 + 7;
        int count = 0;
        while(n){
            count += n % 2; 
            n = n >> 1;
        }
        return count;*/
        int count = 0;
        while(n){
            count++;
            n = n&(n-1);
        }
        return count;
    }
};