class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int beg =1; 
        long long int end = num;
        while(beg <= end){
            long long int mid=(beg+end)/2;
            if(mid*mid == num)
                return true;
            else if(mid*mid > num){
                end=mid-1;
            } else{
                beg=mid+1;
            }
        }
        return false;
    }
};