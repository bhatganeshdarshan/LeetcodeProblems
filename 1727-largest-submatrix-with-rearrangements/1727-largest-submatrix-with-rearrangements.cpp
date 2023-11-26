class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), ans = 0 ;
        vector<pair<int,int>> prevHeights;
        for(int row = 0 ;row < m ;++row){
            vector<pair<int,int>> pairHeights ;
            vector<bool> seen(n,false);
            for(auto [height,col]:prevHeights){
                if(matrix[row][col]>0){
                    pairHeights.push_back({height+1,col});
                    seen[col]=true;
                }
            }
            for(int col=0 ;col<n ;++col){
                if(matrix[row][col]>0 && seen[col]==false){
                    pairHeights.push_back({1,col});
                }
            }
            for(int i =0 ; i < pairHeights.size() ; i++){
                ans = max(ans,pairHeights[i].first*(i+1));
            }
            prevHeights=pairHeights;
        }
        return ans;
    }
};