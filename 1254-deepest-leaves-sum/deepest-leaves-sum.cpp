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
    int depth;
    int ans;
    void dfs(TreeNode* curr, int i){
        if(curr == NULL) return;
        if(i > depth){
            depth = i;
            ans = curr->val;
        }
        else if (depth == i){
            ans += curr->val; 
        }
        dfs(curr->left, i + 1);
        dfs(curr->right, i + 1);
    }
    int deepestLeavesSum(TreeNode* root) {
        ans = 0;
        dfs(root, 0);
        return ans;
    }
};