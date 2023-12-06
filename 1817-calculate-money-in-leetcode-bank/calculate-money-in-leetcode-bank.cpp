class Solution {
public:
    int totalMoney(int n) {
        int amount  = 0;
        for(int day = 0; day < n; day++){
            amount += (day / 7 + 1) + (day % 7);
        }
        return amount;
    }
};