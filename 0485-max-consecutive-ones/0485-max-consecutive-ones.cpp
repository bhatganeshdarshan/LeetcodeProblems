class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m = 0 ;
        int count = 0 ;
        for(auto x: nums){
            count=(x==1)?(count+1):0 ;
            m = max(m,count);
        }
        return m ;
    }
};