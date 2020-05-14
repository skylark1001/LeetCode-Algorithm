class Solution {
public:
    vector<vector<string>> ans;
    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        back(board, 0, n);
        return ans.size();
    }

    void back(vector<string> board, int row, int n){
        if(row==n){
            ans.push_back(board);
            return;
        }

        for(int col=0; col<n;col++){
            if(!isValid(board, row, col))
                continue;

            board[row][col] = 'Q';
            back(board, row+1, n);
            board[row][col] = '.';
        }
    }

    bool isValid(vector<string> board, int row, int col){
        int n = board.size();

        for(int i=0; i<n;i++){
            if(board[i][col]=='Q') 
                return false;
        }

        // 检查右上方是否有皇后互相冲突
        for (int i = row - 1, j = col + 1; 
                i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q')
                return false;
        }
        // 检查左上方是否有皇后互相冲突
        for (int i = row - 1, j = col - 1;
                i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q')
                return false;
        }

        return true;
    }
};