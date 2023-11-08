class Solution {
private:
        set<vector<int>> out ;
public:
    void F(vector<int>& nums , int l , int r){
        if(l==r){
            //base condition
            out.insert(nums);
            return ;
        }
        for(int i = l ; i< r ; i++){
            swap(nums[i],nums[l]);
            F(nums,l+1,r);
            swap(nums[i],nums[l]);
        }
        return ;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        F(nums,0,nums.size());
        vector<vector<int>> ans(out.begin(),out.end());
        return ans;
    }
};