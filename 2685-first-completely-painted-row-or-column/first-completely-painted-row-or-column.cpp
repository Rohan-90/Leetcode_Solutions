class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int minIndex = INT_MAX;
        unordered_map<int,int> mp;
        for(int i = 0 ; i < arr.size(); i++) mp[arr[i]] = i;
        for(int i = 0; i < m; i++) {
            int rowsCount = -1;
            for(int j = 0; j < n; j++) {
                rowsCount = max(mp[mat[i][j]], rowsCount);
            }
            minIndex = min(rowsCount, minIndex);
        }
        for(int j = 0; j < n; j++) {
            int colsCount = -1;
            for(int i = 0; i < m; i++) {
                colsCount = max(mp[mat[i][j]], colsCount);
            }
            minIndex = min(colsCount, minIndex);
        }
        return minIndex;
    }
};