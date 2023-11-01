class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int cum_xor = 0 ;
        for(int i = 0 ; i < nums.size();i++){
            cum_xor = cum_xor ^ nums[i];
        }
        return cum_xor ;
    }
};