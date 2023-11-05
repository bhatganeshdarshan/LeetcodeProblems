class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> eachBox;
        unordered_map<char,int> row;
        unordered_map<char,int> column ;
        int j= 0 ;
        int i=0 ;
        for( i =0 ; i < 9 ;i++){
            for( j=0 ; j< 9 ;j++){
                if(board[i][j] != '.'){
                    row[board[i][j]]++;
                }
                if(board[j][i]!='.'){
                    column[board[j][i]]++;
                }
                if(row[board[i][j]]>1) return false;
                if(column[board[j][i]]>1) return false ;
            }
            row.clear();
            column.clear();
        }
        for(i=0 ; i < 9 ;i+=3){
            for(j=0 ; j <9 ;j+=3){
                eachBox.clear();
                for(int x = i ; x < i+3 ; x++){
                    for(int y = j ; y < j+3; y++){
                        if(board[x][y]!='.'){
                            eachBox[board[x][y]]++;
                        }
                        if(eachBox[board[x][y]]>1) return false ;
                    }
                }
            }
        }
        return true;
    }

};