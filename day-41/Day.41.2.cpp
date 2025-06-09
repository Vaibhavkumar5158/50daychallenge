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
    // Helper to find the minimum value node in a BST subtree
    TreeNode* findMin(TreeNode* root) {
        while (root->left != nullptr) {
            root = root->left;
        }
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr; // base case: empty tree
        
        if (key < root->val) {
            // search in left subtree
            root->left = deleteNode(root->left, key);
        } else if (key > root->val) {
            // search in right subtree
            root->right = deleteNode(root->right, key);
        } else {
            // found the node to delete

            // Case 1: No child
            if (!root->left && !root->right) {
                delete root;
                return nullptr;
            }
            // Case 2: One child (right)
            else if (!root->left) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            // Case 2: One child (left)
            else if (!root->right) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            // Case 3: Two children
            else {
                // find inorder successor (smallest in right subtree)
                TreeNode* temp = findMin(root->right);
                // copy successor's value to root
                root->val = temp->val;
                // delete successor node recursively
                root->right = deleteNode(root->right, temp->val);
            }
        }
        return root;
    }
};
