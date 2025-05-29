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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;

        // Helper function to compute height and update diameter
        function<int(TreeNode*)> dfs = [&](TreeNode* node) -> int {
            if (!node) return 0;

            int left = dfs(node->left);
            int right = dfs(node->right);

            diameter = max(diameter, left + right); // update max path
            return 1 + max(left, right); // return height
        };

        dfs(root);
        return diameter;
    }
};
