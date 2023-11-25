class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int m = nums.size() , n = 0 ;
        for(int i=0 ; i < m ;i++){
            n = max(n,static_cast<int>(nums[i].size())); //find max n 
        }
        vector<vector<int>> temp(m+n);
        vector<int> ans;

        for(int i =0 ; i < m ;i++){
            for(int j=0 ;j < nums[i].size() ;j++){
                temp[i+j].push_back(nums[i][j]);
            }
        }
        for(int i =0 ;i < m+n ;i++){
            reverse(temp[i].begin(),temp[i].end());
        }
        for(auto row:temp){
            for(auto col:row){
                ans.push_back(col);
            }
        }

        return ans;

    }
};