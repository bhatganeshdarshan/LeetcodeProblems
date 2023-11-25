class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,0);
        dp[0]=1;
        for(int i = 1; i <= n ;i++){
            int res = INT_MAX;
            for(int j = 1 ;j*j<=n ; j++){
                res = (i-j*j>=0)?min(1+dp[i-j*j],res):res;
            }
            dp[i]=res;
        }
        return dp[n]-1 ;
    }
};