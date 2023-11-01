class Solution {
public:
    int countbits(int n){
        int count = 0 ;
        while(n>0){
            n=n&(n-1);
            count++;
        }
        return count;
    }

    int hammingDistance(int x, int y) {
        // xor x and y 
        // find no of bits in xor value
        return countbits(x^y);

    }
};