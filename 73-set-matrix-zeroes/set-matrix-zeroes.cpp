class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool flag1 = false;
        bool flag2 = false;
        for(int row = 0; row < n; row++){
            if(matrix[row][0] == 0) flag1 = true;
        }
        for(int col = 0; col < m; col++){
            if(matrix[0][col] == 0) flag2 = true;
        }

        for(int row = 1 ; row < n; row++){
            for(int col = 1; col < m; col++){
                if(matrix[row][col] == 0){
                    matrix[row][0] = 0;
                    matrix[0][col] = 0;
                }
            }
        }
        for(int row = 1 ; row < n; row++){
            for(int col = 1; col < m; col++){
                if(matrix[0][col] == 0 || matrix[row][0] == 0) matrix[row][col] = 0;
            }
        }
        if(flag1 == true){
            for(int row = 0; row < n; row++) matrix[row][0] = 0;
        }
        if(flag2 == true){
            for(int col = 0; col < m; col++) matrix[0][col] = 0;
        }
    }
};