class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        // vector<int> dp(n,0);
        // dp[0]=nums[0];
        // int ans=INT_MIN;
        int cur_max=nums[0];
        int minp=nums[0];
        int maxp=nums[0];
        for(int i =1 ;i < n ;i++){
            if(nums[i]<0) swap(minp,maxp);
            maxp=max(nums[i],maxp*nums[i]);
            minp=min(nums[i],minp*nums[i]);
            cur_max=max(cur_max,maxp);
            // ans=max(cur_max,ans);
        }
        
        return cur_max; 
    }
};