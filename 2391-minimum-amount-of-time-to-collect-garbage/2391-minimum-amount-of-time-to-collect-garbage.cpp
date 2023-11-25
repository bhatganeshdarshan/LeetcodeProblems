class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int res = 0 , N = garbage.size();
        for(int i = 0 ; i < N ;i++){
            res+= garbage[i].length();
        }
        bool M=false , G=false , P=false ;
        for(int i = N-1 ; i>=1 ;i--){
            
            for(int j=0 ; j<garbage[i].length();j++){
                if(garbage[i][j]=='M') M=true;
                if(garbage[i][j]=='G') G=true ;
                if(garbage[i][j]=='P') P=true;
            }
                res+= travel[i-1] * ((M?1:0) + (G?1:0) + (P?1:0)) ; 
        }
        
        return res;
    }
};