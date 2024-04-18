class Solution {
public:
     
    int ans = 0, n, m;
    void dfs(vector<vector<int>>& grid, int i, int j){
        
        if(i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0){
            ans++;
            return;
        }
        
        if(grid[i][j] == -1) return;
        grid[i][j] = -1;

        dfs(grid, i+1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
        dfs(grid, i-1, j);

    }
    int islandPerimeter(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    dfs(grid, i, j);
                    return ans;
                }
            }
        }  
        return -1;
    }
};