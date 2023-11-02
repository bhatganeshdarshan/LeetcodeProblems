class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0 ;
        int i ,j ;
        ans = (1<<(m-1))*n;
        for(j=1;j<m;j++){
            int val = 1<<(m-1-j);
            int set = 0 ;
            for(i=0 ;i < n;i++){
                if(grid[i][j]==grid[i][0]) set++;
            }
            ans+=max(set,n-set)*val ;
        }
        return ans;
    }
};