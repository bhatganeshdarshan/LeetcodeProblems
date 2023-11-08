class Solution {
public:
    bool canPlace(vector<vector<int>> board, int n ,int x,int y){
        for(int k =0 ; k < x ;k++){
            if(board[k][y]==1){
                return false;
            }
        }
        int i = x ;
        int j = y ;
        while(i >=0 && j >= 0){
            if(board[i][j]==1) return false;
            i--;
            j--;
        }
        i=x ;
        j=y ;
        while(i >=0 && j < n){
            if(board[i][j] == 1) return false ;
            i-- ;
            j++ ;
        }
        return true; 
    }
    int countNQueens(vector<vector<int>> board, int n , int i){
        if(i==n){
            return 1; // base condition
        }
        int ways = 0 ;
        for(int j=0 ;j < n; j++){
            if(canPlace(board,n,i,j)){
                board[i][j]=1;
                ways += countNQueens(board,n,i+1);
                board[i][j]=0 ; //backtrack
            }
        }
        return ways;
    }
    int totalNQueens(int n) {
        vector<vector<int>> board(n,vector<int>(n,0));
        return countNQueens(board,n,0);
    }
};