/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    vector<int> v ;
public:
    void inorder(TreeNode* root){
        if(root){
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        unordered_map<int,int> H ;
        for(int i = 0 ;i<v.size();i++){
            H[v[i]]++;
        }
        vector<int> modes;
        int max = 0 ;
        for(auto x:H){
            if(x.second>max){
                max = x.second;
                modes.clear();
                modes.push_back(x.first);
            } else if(x.second == max){
                modes.push_back(x.first);
            }
        }
        return modes;
        
    }
};