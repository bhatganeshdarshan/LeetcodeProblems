class Solution {
    vector<vector<int>> ans;
public:
    void F(vector<int>& nums ,int l,int r){
        //base case 
        if(l==r){
            ans.push_back(nums);
            return ;
        }
        for(int i = l ; i <r ;i++){
            swap(nums[l],nums[i]);
            F(nums,l+1,r);
            swap(nums[l],nums[i]);
        }
        return ;

    }
    vector<vector<int>> permute(vector<int>& nums) {
        F(nums,0,nums.size());
        return ans;
    }
};