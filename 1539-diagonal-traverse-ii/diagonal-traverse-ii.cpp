class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> ans;
        queue<pair<int, int>> q;
        q.push({0,0});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            ans.push_back(nums[row][col]);
            if(!col && row + 1 < nums.size()) q.push({row + 1,0});
            if(col + 1 < nums[row].size()) q.push({row, col + 1});
        }
        return ans;
    }
};