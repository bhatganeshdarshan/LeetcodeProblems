
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> KL ;
        for(auto x:nums){
            KL.push(x);
        }
        k--;
        while(k--){
            KL.pop();
        }
        return KL.top();
    }
};