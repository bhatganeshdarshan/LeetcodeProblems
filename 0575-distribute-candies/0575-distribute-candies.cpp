class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> candySet ;
        int n = candyType.size();
        for(int i=0;i<n;i++){
            candySet.insert(candyType[i]);
        }
        if(candySet.size()<=(n/2)) return candySet.size();
        else return n/2;
    }
};