class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v ;
        v.push_back(first);
        int a;
        for(auto x:encoded){
            a= x^first;
            v.push_back(a);
            first = a;
        }
        return v;
    }
};