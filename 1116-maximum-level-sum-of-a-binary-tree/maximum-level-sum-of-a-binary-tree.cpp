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
    
  
    int maxLevelSum(TreeNode* root) {
        int level = 0, maxSum = INT_MIN, ans = 0;
        if(root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            int sum = 0;
            level++;
            while(n--){
                TreeNode* curr = q.front();
                q.pop();
                sum += curr->val; 
                if(curr->left != NULL) q.push(curr->left);
                if(curr->right != NULL) q.push(curr->right);
            }
            if(maxSum < sum){
                ans = level;
                maxSum = sum;
            }
        }
        return ans;
    }
};