class Solution {
public:
    int n, m;
    vector<vector<int>> dir{{1,0}, {-1,0}, {0,1}, {0,-1}};
    bool solve(vector<vector<char>>& board, int i, int j, int idx, string& word){
        if(idx >= word.size()) return true;
        if(i >= m || i < 0 || j < 0 || j >= n || board[i][j] == '#') return false;
        if(board[i][j] != word[idx]) return false;

        char temp = board[i][j];
        board[i][j] = '#';

        for(auto &it : dir){
            int row = i + it[0];
            int col =  j + it[1];
            if(solve(board, row, col, idx + 1, word)) return true;
        }

        board[i][j] = temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == word[0] && solve(board, i, j, 0, word)) return true;
            }
        }
        return false;
    }
};