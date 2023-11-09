class Solution {
    vector<int> ans; 
public:
    void F(vector<int>& nums , int target){
        int lb= -1,rb=-1;
        int beg =0 , end = nums.size() -1 ;
        while(beg<=end){
            int mid = (beg+end)/2 ;
            if(nums[mid]==target){
                lb=mid;
                end=mid-1;
            } else if(nums[mid]>target){
                end=mid-1;
            } else{
                beg=mid+1;
            }
        }
        ans.push_back(lb);
        beg=0 ; end =nums.size()-1;
        while(beg<=end){
            int mid = (beg+end)/2 ;
            if(nums[mid]==target){
                rb=mid;
                beg=mid+1;
            } else if(nums[mid]>target){
                end=mid-1;
            } else{
                beg=mid+1;
            }
        }
        ans.push_back(rb);
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        F(nums,target);
        return ans;
    }
};