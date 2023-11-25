const int MOD = 1e9+7 ;
class Solution {
public:
    int rev(int n){
        int rev_n = 0 ;
        while(n!=0){
            int digit = n%10 ;
            rev_n = (rev_n * 10 + digit)%MOD ;
            n=n/10 ;
        }
        return rev_n ;
    }
    int countNicePairs(vector<int>& nums) {
        int pairs = 0 , N = nums.size();
        vector<int> diff;
        for(int i = 0 ; i < N ; i++) {
            int d = nums[i] - rev(nums[i]);
            diff.push_back(d) ;
        }
        unordered_map<int,int> frequency ; 
        for(int x : diff) {
            frequency[x]++ ;
        }
        
        for(auto x : frequency){
            int f = x.second ;
            pairs = (pairs + (static_cast<long long>(f) * (f - 1) / 2)) % MOD;
        }
        return pairs ;
    }
};