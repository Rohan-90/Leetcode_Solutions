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
    TreeNode* solve(TreeNode* root, int val, int depth, int d){
        if(root == NULL) return NULL;
        if(d == depth - 1){
            TreeNode* temp = root->left;
            TreeNode* temp2 = root->right;
            root->left = new TreeNode(val);
            root->right = new TreeNode(val);
            root->left->left = temp;
            root->right->right = temp2;
            return root;
        } 
        root->left = solve(root->left, val, depth, d + 1);
        root->right = solve(root->right, val, depth, d + 1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* node = new TreeNode(val);
            node->left = root;
            return node;
        }
        return solve(root, val, depth, 1);
    }
};