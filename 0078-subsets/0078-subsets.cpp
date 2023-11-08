class Solution {
    vector<vector<int>> ans ;
public:
    void findSubsets(vector<int>& input , vector<int>& output, int i , int j){
        //base condition
        if(i== input.size()){
            ans.push_back(vector<int>(output.begin(),output.begin()+j));
            return ;
        }
        //rec call
        //include i th ele
        output[j]=input[i] ;
        findSubsets(input,output,i+1,j+1);
        //excl ith ele
        findSubsets(input,output,i+1,j);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> output(nums.size());
        findSubsets(nums,output,0,0);
        return ans ;
    }
};