class Solution {
    vector<string> O ;
public:
    void findSubsets(string output , int n ,int open , int close,int i){
        //base condition 
        if(i==2*n){
            O.push_back(output);
            return;
        }
        if(open<n){
            findSubsets(output+"(",n,open+1,close,i+1);
        }
        if(close < open){
            findSubsets(output+")",n,open,close+1,i+1);
        }

    }
    vector<string> generateParenthesis(int n) {
        string output;
        findSubsets(output,n,0,0,0);
        return O ;
    }
};