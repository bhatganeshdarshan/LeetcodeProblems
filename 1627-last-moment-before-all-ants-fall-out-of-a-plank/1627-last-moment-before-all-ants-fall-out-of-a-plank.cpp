class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int leftMax= 0 ;
        int rightMin=INT_MAX;
        for(int x:left){
            leftMax=max(x,leftMax);
        }
        for(int x:right){
            rightMin =min(x,rightMin);
        }
        return max(leftMax,n-rightMin) ;
    }
};