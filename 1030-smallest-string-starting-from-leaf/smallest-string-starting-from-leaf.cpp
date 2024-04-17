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
    string ans = "";
    void dfs(TreeNode* root, string curr){
        if(root == NULL) return;
        char ch = 'a' + root->val;
        curr =  ch + curr;
        if(root->left == NULL && root->right == NULL){
            if(ans == "" || ans > curr) ans = curr;
            return;
        }
        dfs(root->left, curr);
        dfs(root->right, curr);
    }
    string smallestFromLeaf(TreeNode* root) {
        dfs(root, "");
        return ans;
    }
};