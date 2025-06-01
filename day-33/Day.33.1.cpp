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
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            int rightmostVal;

            for (int i = 0; i < size; ++i) {
                TreeNode* current = q.front();
                q.pop();

                // update the rightmost value at this level
                rightmostVal = current->val;

                if (current->left) q.push(current->left);
                if (current->right) q.push(current->right);
            }

            // after this level, push the last value we saw
            result.push_back(rightmostVal);
        }

        return result;
    }
};
