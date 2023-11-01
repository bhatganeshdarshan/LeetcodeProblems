class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector <int> v ;
        int first = 0;
        int temp ;
        for(auto x:pref){
            temp = x ^ first;
            v.push_back(temp);
            first = first^temp ;
        }
        return v ;
    }
};