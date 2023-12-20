class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int amount = money;
        sort(prices.begin(), prices.end());
        for(int i = 0; i < 2; i++){
            money -= prices[i]; 
            if(money < 0) return amount;
        }
        return money;
    }
};