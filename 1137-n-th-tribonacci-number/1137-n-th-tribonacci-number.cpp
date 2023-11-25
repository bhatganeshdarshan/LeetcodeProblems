class Solution {
public:
    int tribonacci(int n){
        if(n==0)return 0;
        if(n==1 || n==2) return 1;
        int prev0 = 0 , prev1=1 , prev2=1 , fib =0 ;
        for(int i =3 ;i <= n ;i++){
            fib=prev0+prev1+prev2;
            prev0=prev1;
            prev1=prev2;
            prev2=fib;
        }
        return fib;
    }
};