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
    int sum = 0; 
    void dfs(TreeNode* root, bool flag){
        if(root == NULL) return;
        if(root->left != NULL){
            dfs(root->left, true);
        }
        if(root->right != NULL){
            dfs(root->right, false);
        }
        if(root->left == NULL && root->right == NULL && flag) sum += root->val;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root, false);
        return sum;
    }
};