class Solution {
public:
    int bitcount(int n){
        int count = 0 ;
        while(n>0){
            n = n&(n-1);
            count++;
        } 
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;

        vector<int> ans;
        for(auto x:arr){
            heap.push(make_pair(bitcount(x),x));
        }
        while(heap.size()>0){
            ans.push_back(heap.top().second);
            heap.pop();
        }
        return ans;
    }
};