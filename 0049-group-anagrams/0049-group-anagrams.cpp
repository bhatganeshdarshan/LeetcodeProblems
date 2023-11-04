class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>> mp ;
        vector<vector<string>> result ;
        int n = s.size();
        for(int i = 0 ; i<n ; i++){
            string temp = s[i];
            sort(s[i].begin(),s[i].end());
            mp[s[i]].push_back(temp);
        }
        for(auto x : mp){
            result.push_back(x.second);
        }
        return result ;
    }
};