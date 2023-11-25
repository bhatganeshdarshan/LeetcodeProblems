class Solution {
private:
    int F(vector<int>& nums, int n , vector<int> & dp , int i ){
        if(i==n-1) return 0 ;
        if(i>=n) return INT_MAX ;
        if(dp[i]!=0) return dp[i] ;
        int steps =INT_MAX ;
        int max_jumps=nums[i] ;
        for(int jump=1 ;jump<=max_jumps ;jump++){
            int sub_jump = F(nums,n,dp,i+jump);
            if(sub_jump<INT_MAX){
                steps=min(steps,sub_jump+1);
            }
        }
        return dp[i] = steps;
    }
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n);
        return F(nums,n,dp,0);
    }
};