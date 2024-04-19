class Solution {
public:
    void solve(vector<vector<char>>& grid, int row, int col){
        if(row >= grid.size() || col >= grid[0].size() || row < 0 || col < 0 || grid[row][col] == '0') return;
        grid[row][col] = '0';
        solve(grid, row + 1, col);
        solve(grid, row - 1, col);
        solve(grid, row, col + 1);
        solve(grid, row, col - 1);

    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int  i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    solve(grid, i ,j);
                    count++;
                }
            }
        }
        return count;
    }
};