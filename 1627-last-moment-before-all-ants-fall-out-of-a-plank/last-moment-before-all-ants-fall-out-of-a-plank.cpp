class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int maxLeft = 0; 
        int minRight = INT_MAX; 
        for (auto l : left) maxLeft = max(maxLeft, l);
        for (auto r : right) minRight = min(minRight, r);
        int ans = max(maxLeft, n - minRight);
        return ans;
    }
};