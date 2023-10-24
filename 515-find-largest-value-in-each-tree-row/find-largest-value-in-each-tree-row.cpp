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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if (root == NULL) return ans; // Check if the root is NULL

        deque<TreeNode*> dq;
        dq.push_back(root); // Add the root node to the deque

        while (!dq.empty()) { // Use !dq.empty() to check if the deque is not empty
            int rowMax = INT_MIN; // Initialize rowMax with the smallest possible value
            int levelSize = dq.size(); // Get the size of the current level
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = dq.front(); // Use front() to access the front element
                dq.pop_front(); // Use pop_front() to remove the front element
                
                rowMax = max(rowMax, node->val);
                if (node->left != NULL) dq.push_back(node->left);
                if (node->right != NULL) dq.push_back(node->right);
            }
            ans.push_back(rowMax);
        }
        return ans;
    }
};