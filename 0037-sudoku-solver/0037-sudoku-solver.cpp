class Solution {
    bool canSolve(vector<vector<char>>& matrix ,int i ,int j,char num ,int n){
        // check for repeated elements in row and column 
        // char ch_num='0'+num;
        for(int k=0 ; k < n ;k++){   
            if(matrix[k][j]==num || matrix[i][k]==num){
                return false;
            }
        }
        // check for subgird 
        int x=0 ;
        int y=0;
        int sx = (i/3)*3;
        int sy= (j/3)*3;
        for(x=sx ; x < sx+3; x++){
            for(y=sy;y<sy+3;y++){
                if(matrix[x][y]==num) return false;
            }
        }
        return true;
    }
public:
    bool fillSudoku(vector<vector<char>>& matrix,int i ,int j ,int n){
        //base case 
        if(i==n){
            return true;
        }
        //rec case 
        //move to next row 
        if(j==n){
            return fillSudoku(matrix,i+1,0,n);
        }
        //skip and move to next ele , if it is already filled 
        if(matrix[i][j]!='.'){
            return fillSudoku(matrix,i,j+1,n);
        }

        for(int num =1 ; num<=n; num++){
            char ch_num = '0'+num;
            if(canSolve(matrix,i,j,ch_num,n)){
                matrix[i][j]=ch_num;
                // bool subProblem= ;
                if(fillSudoku(matrix,i,j+1,n)){
                    return true;
                }
            }
        }
         matrix[i][j]='.';
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        fillSudoku(board,0,0,9);
    }
};