class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i ,int j, vector<vector<bool>>& vis) {
        int n = grid.size();
        int m = grid[0].size();
        if(i < 0 || i >= n || j < 0 || j >= m || vis[i][j] == 1 || grid[i][j] == 0){
            return;
        }
        vis[i][j] = 1;
        dfs(grid, i+1, j, vis);
        dfs(grid, i-1, j, vis);
        dfs(grid, i, j - 1, vis);
        dfs(grid, i, j + 1, vis);
    }
    int noOfIslands(vector<vector<int>>& grid, int n ,int m) {
        vector<vector<bool>> vis(n, vector<bool> (m, 0));
        int count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!vis[i][j] && grid[i][j] == 1) {
                    dfs(grid,i,j,vis);
                    count++;
                }
            }
        }
        return count;
    }
    int minDays(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = noOfIslands(grid,n,m); 
        if(ans > 1 || ans == 0) {
            return 0;
        }      
        else {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    if(grid[i][j] == 1) {
                        grid[i][j] = 0;
                        ans = noOfIslands(grid,n,m); 
                        if(ans > 1 || ans == 0) return 1;
                        grid[i][j] = 1;
                    } 
                }
            }
        }
        return 2;
    }
};