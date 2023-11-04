class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result ;
        unordered_map<int,int> Hash ;

        for(int i = 0 ; i < nums.size() ;i++){
            int complement = target - nums[i] ;
            if(Hash.find(complement)!=Hash.end()){
                result.push_back(Hash[complement]);
                result.push_back(i);
                return result ;
            }
            Hash[nums[i]]= i ;
        }

        return result ;
    }
};