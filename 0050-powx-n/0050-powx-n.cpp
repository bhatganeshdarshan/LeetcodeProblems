class Solution {
public:
    double myPow(double x, int n) {
        double result = 1 ;
        if(n==0) return 1.0 ;
        if(n<0){
            x= 1.0 / x ;
            if(n==INT_MIN){
                x*=x ;
                n=-(n/2);
            }
            else{
            n= -n ;
            }
        }
        while(n){
            if(n&1) result*=x;
            x*=x ;
            n=n>>1;
        }
        return result ;
    }
};