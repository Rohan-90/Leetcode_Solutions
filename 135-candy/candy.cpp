class Solution {
public:
    int candy(vector<int>& ratings) {
        int ans = 0;
        vector<int> candies(ratings.size(), 1);
        for(int  i = 1; i < ratings.size(); i++) if(ratings[i - 1] < ratings[i]) candies[i] = candies[i-1] + 1;  
        for(int i = ratings.size() - 1; i > 0; i--) if(ratings[i - 1] > ratings[i]) candies[i - 1] = max(candies[i-1], candies[i] + 1);
        int sum = accumulate(candies.begin(), candies.end(), 0);
        return sum;
    }
};