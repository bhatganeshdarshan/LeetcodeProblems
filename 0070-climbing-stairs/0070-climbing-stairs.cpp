class Solution {
public:
    // int  F(int n,vector<int> & dp){
    //     if(n==1 || n==0) return 1;
    //     if(dp[n]!=0) return dp[n];
    //     return dp[n]=F(n-1,dp)+F(n-2,dp);
    // }
    // int climbStairs(int n) {
    //     vector<int> dp(n+1,0);
    //     return F(n,dp);
    // }  

    int climbStairs(int n){
        vector<int> dp(n+1,0);
        dp[0]=dp[1]=1;
        for(int i=2; i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n]; // bottom up dp approach 
    }
};