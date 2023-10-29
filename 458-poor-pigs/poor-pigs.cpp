class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if(buckets-- == 1) return 0;
        int ans = 0;
        int base = minutesToTest / minutesToDie + 1;
        while(buckets > 0){
            buckets /= base;
            ans += 1;
        }
        return ans;
    }
};