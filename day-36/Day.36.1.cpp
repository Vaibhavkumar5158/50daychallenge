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
    int helper(TreeNode* root, int currNumber) {
        if (!root) return 0;

        // Update current number
        currNumber = currNumber * 10 + root->val;

        // If leaf node, return the number formed so far
        if (!root->left && !root->right)
            return currNumber;

        // Recurse for left and right subtree
        return helper(root->left, currNumber) + helper(root->right, currNumber);
    }

    int sumNumbers(TreeNode* root) {
        return helper(root, 0);
    }
};
