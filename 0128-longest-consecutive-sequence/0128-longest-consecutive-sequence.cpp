class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(),nums.end());
        int longest = 0 ;
        int length=0 ;
        for(auto n:nums){
            //if n-1 in numset
            if(numSet.count(n-1)<=0){
                length=0 ;
                while(numSet.count(n+length)>0){
                    length++ ;
                }
                longest=max(length,longest);
            }
        }
        return longest;
    }
};