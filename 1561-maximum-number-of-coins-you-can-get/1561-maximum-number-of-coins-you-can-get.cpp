class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n = piles.size(), total=0 ;
        // if(n==0) return 0 ;
        // sort(piles.begin(),piles.end());
        // deque<int> Q(piles.begin(),piles.end());
        // int total =0 ;
        // while(Q.size()>0){
        //     Q.pop_back();
        //     total+=Q.back();
        //     Q.pop_back();
        //     Q.pop_front();
        // }
        // return total;
        for(int i = n-2 ;i >= n/3;i-=2){
            total+= piles[i] ;
        }
        return total;
    }
};