
class Solution {
public:
    bool canEatAll(vector<int>& arr , int N ,int h ,int k){
        long long int count = 0 ;
        for(long long int x:arr){
            count += (x + k - 1) / k;
        }
        if(count<=h) return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int beg = 1; 
        int N= piles.size();
        int end = piles[N-1];
        int ans =-1;
        while(beg<=end){
            int mid = (beg+end)/2;
            if(canEatAll(piles,N,h,mid)){
                ans= mid ;
                end = mid -1 ;
            } else{
                beg=mid+1;
            }
        }
        return ans;
    }
};