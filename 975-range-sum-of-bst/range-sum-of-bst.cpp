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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL) return NULL;
        int curr = 0;
        if(root->val >= low && root->val <= high) curr = root->val;
        int left = rangeSumBST(root->left,low,high);
        int right = rangeSumBST(root->right,low,high);
        return curr + left + right;
    }
};