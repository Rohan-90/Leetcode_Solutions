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
    int solve(TreeNode* root, int maxi, int mini){
        if(root == NULL) return maxi - mini;
        maxi = max(maxi, root->val);
        mini = min(mini, root->val);
        int maxLeft = solve(root->left,maxi,mini);
        int maxRight = solve(root->right,maxi,mini);
        return max(maxLeft, maxRight);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root == NULL) return NULL;
        return solve(root, root->val, root->val);
    }
};