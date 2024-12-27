class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxi = values[0], maxValue = -1;
        for(int i = 1; i < values.size(); i++) {
            maxValue = max(maxValue, maxi + values[i] - i);
            maxi = max(maxi, values[i] + i);
        }
        return maxValue;
    }
};