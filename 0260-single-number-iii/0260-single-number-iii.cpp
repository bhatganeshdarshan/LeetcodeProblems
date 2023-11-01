class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans ;
        int result = 0 ;
        for(int i = 0 ;i< nums.size();i++){
            result = result ^ nums[i];
        }
        int temp = result ;
        int pos = 0 ;
        while((temp&1)==0){
            pos++;
            temp = temp>>1;
        }
        int setA=0,setB=0;
        int mask = 1 << pos;
        for(int i = 0 ; i< nums.size();i++){
            if((nums[i]&mask)>0) setA= setA ^ nums[i];
            else{setB=setB^nums[i];}
        }
        ans.push_back(setA);
        ans.push_back(setB);
        return ans;
    }
};