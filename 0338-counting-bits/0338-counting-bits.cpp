class Solution {
public:
    int count_bits(int a){
        int cnt=0 ;
        while(a){
            cnt+= a&1;
            a=a>>1;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(count_bits(i));
        }
        return ans;
    }
};