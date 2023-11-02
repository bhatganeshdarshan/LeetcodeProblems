class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift_count= 0 ;
        while(left!=right && left>0){
            shift_count++;
            left=left>>1;
            right=right>>1;
        }
        return left<<shift_count;
    }
};