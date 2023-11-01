class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> H;
        for(auto x:nums){
            H[x]++;
        }
        for(auto x:H){
            if(x.second==1){
                return x.first;
            }
        }
        return -1;
    }
};