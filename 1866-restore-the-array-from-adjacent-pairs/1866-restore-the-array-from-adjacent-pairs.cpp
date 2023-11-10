#pragma GCC optimize("O3")
class Solution {
public:
    const int b=100000;
    vector<vector<int>> adj;
    void build_adj(vector<vector<int>>& adjacentPairs){
        adj.resize(2*b+1);
        #pragma unroll
        for(auto& e: adjacentPairs){
            int v0=e[0]+b, v1=e[1]+b;
            if (!adj[v0].empty()) 
                adj[v0].push_back(v1);
            else
                adj[v0]={v1};
            if (!adj[v1].empty())
                adj[v1].push_back(v0);
            else 
                adj[v1]={v0};
        }
    }
    vector<int> ans;
    void dfs(int i, int prev){
        ans.push_back(i-b);
        for(int j: adj[i]){
            if (j==prev) continue;
            dfs(j, i);
        }

    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        build_adj(adjacentPairs);
        int root=INT_MAX;
        #pragma unroll
        for(int i=0; i<=2*b; i++)
            if (adj[i].size()==1){
                root=i;
                break;
            }
        dfs(root, INT_MAX);
        return ans;
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();