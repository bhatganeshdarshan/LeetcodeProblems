class Solution {
public:
    void updateSum(int x , vector<int>&arr){
        for(int i = 0 ; i< 32;i++){
            int ithbit = (x&(1<<i));
            if(ithbit){
                arr[i]++;
            }
        }
    }
    int tobinary(vector<int> arr){
        int ans = 0 ;
        for(int i = 0 ; i< 32;i++){
            ans+=arr[i]*(1<<i);
        }
        return ans;
    }

    int singleNumber(vector<int>& nums) {
        vector<int> arr(32,0);
        for(auto x:nums){
            updateSum(x,arr);
        }
        for(int i = 0 ; i < 32 ;i++){
            arr[i]=arr[i]%3;
        }
        return tobinary(arr);
    }
};