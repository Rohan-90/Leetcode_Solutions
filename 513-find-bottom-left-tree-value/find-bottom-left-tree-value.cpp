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
    int maxDepth;
    int ans;
    void dfs(TreeNode* root, int d){
        if(root == NULL) return;
        if(d > maxDepth){
            maxDepth = d;
            ans = root->val;
        }
        dfs(root->left, d + 1);
        dfs(root->right, d + 1);

    }
public:
    int findBottomLeftValue(TreeNode* root) {
        maxDepth = -1;
        dfs(root, 0);
        return ans;
    }
};