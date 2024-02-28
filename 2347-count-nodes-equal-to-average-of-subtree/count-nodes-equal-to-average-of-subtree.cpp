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
public:
    int ans;
    pair<int,int> dfs(TreeNode* root){
        if(root == NULL) return {0,0};
        pair<int,int> x = {root->val, 1};
       
        {
            pair<int,int> y = dfs(root->left);
            x.first += y.first;
            x.second += y.second;
        }
        
        {
            pair<int,int> y = dfs(root->right);
            x.first += y.first;
            x.second += y.second; 
        }
       
        if(x.first / x.second == root->val) ++ans;
        return x;
    }
    int averageOfSubtree(TreeNode* root) {
        ans = 0;
        dfs(root);
        return ans;
    }
};