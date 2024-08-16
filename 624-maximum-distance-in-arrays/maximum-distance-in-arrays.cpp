class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mini = arrays[0][0], maxi = arrays[0][arrays[0].size() - 1], target = 0;
        for(int i = 1; i < arrays.size(); i++) {
            target = max({abs(arrays[i][0] - maxi), target, abs(mini - arrays[i][arrays[i].size() - 1])});
            mini = min(arrays[i][0], mini);
            maxi = max(arrays[i][arrays[i].size() - 1], maxi);
        }
        return target;
    }
};