const int MOD = 1e9 + 7 ;

class Solution {
public:
    int countHomogenous(string s) {
        vector<int> h ;
        char prev = '$' ;
        int count = 0 ;
        for(auto ch : s){
            if(ch!=prev){
                h.push_back(count);
                count = 1;
            } else{
                count++;
            }
            prev = ch;
        }
        h.push_back(count);
        long long ans =0 ;
            for(auto n:h){
                ans=(ans+(long long)n*(n+1)/2)%MOD ;
            }
            return ans;
    }
};