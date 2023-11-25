class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> dp(n,0);
        dp[0]=nums[0];
        int minp=nums[0];
        int maxp=nums[0];
        for(int i =1 ;i < n ;i++){
            if(nums[i]<0) swap(minp,maxp);
            maxp=max(nums[i],maxp*nums[i]);
            minp=min(nums[i],minp*nums[i]);
            dp[i]=max(nums[i],maxp);
        }
        int res = INT_MIN ;
        for(int i =0 ; i < n ;i++){
            res = max(res,dp[i]);
        }
        return res; 
    }
};