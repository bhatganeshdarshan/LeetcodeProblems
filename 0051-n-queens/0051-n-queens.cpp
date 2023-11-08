class Solution {
    vector<vector<string>> ans;
public:
    bool canPlace(vector<string>& board, int n, int x, int y) {
        for (int k = 0; k < x; k++) {
            if (board[k][y] == 'Q') return false;
        }
        int i = x;
        int j = y;
        while (i >= 0 && j >= 0) {
            if (board[i][j] == 'Q') return false;
            i--;
            j--;
        }
        i = x;
        j = y;
        while (i >= 0 && j < n) {
            if (board[i][j] == 'Q') return false;
            i--;
            j++;
        }
        return true;
    }

    void solveNQ(vector<string>& board, int n, int i) {
        if (i == n) {
            ans.push_back(board);
            return;
        }
        for (int j = 0; j < n; j++) {
            if (canPlace(board, n, i, j)) {
                board[i][j] = 'Q';
                solveNQ(board, n, i + 1);
                board[i][j] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        solveNQ(board, n, 0);
        return ans;
    }
};
