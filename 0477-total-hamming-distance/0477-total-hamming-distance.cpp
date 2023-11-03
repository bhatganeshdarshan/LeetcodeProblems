class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int hammingdistance=0;
        for(int bitpos=0;bitpos<32;bitpos++){
        int setbits=0 ;
            for(int i = 0 ;i<nums.size();i++){
                setbits+=(nums[i]>>bitpos)&1;
            }
            hammingdistance+=setbits * (nums.size()-setbits);
        }
        return hammingdistance;

    }
};