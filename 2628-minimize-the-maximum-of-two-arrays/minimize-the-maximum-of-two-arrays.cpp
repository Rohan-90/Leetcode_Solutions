class Solution {
public:
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        long long low = 1LL* uniqueCnt1 + 1LL * uniqueCnt2;
        long long high = 1e18;
        long long gd = (1LL * divisor1 * divisor2) /__gcd(divisor1,divisor2);
        while(low <= high){
            long long mid = low + (high - low) / 2;
            long long count = mid / gd;
            if((mid - count) >= (1LL * uniqueCnt1 + 1LL *  uniqueCnt2) && (mid - (mid/divisor1)) >=  uniqueCnt1 && (mid - (mid/divisor2)) >=  uniqueCnt2) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};