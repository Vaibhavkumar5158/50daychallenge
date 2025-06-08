/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Store the values for easy comparison
        int pVal = p->val;
        int qVal = q->val;

        while (root != nullptr) {
            // If both values are smaller → go left
            if (pVal < root->val && qVal < root->val) {
                root = root->left;
            }
            // If both values are greater → go right
            else if (pVal > root->val && qVal > root->val) {
                root = root->right;
            }
            // Split point found: one node on left, one on right (or one is root)
            else {
                return root;
            }
        }
        return nullptr;
    }
};
