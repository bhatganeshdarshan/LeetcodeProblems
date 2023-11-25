class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size() , left_sum=0 , right_sum = 0 ;
        vector<int> ans(n) ;
        for(int i =0 ;i < n ;i++){
            right_sum += nums[i] ;
        }
        for(int i =0 ;i < n ;i++){
            ans[i]=(nums[i]*i - left_sum)+(right_sum-nums[i]*(n-i));
            left_sum+=nums[i];
            right_sum-=nums[i];
        }
        return ans;
    }
};