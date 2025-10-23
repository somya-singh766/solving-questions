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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode *> que;

        if (root!=NULL) {
            que.push(root);
        }

        while (!que.empty()) {
            vector<int> level;
            int size = que.size();
            for (int i = 0; i < size; i++) {
                TreeNode* front = que.front();
                que.pop();
                level.push_back(front->val);
                if (front->left ) {
                    que.push(front->left);
                }
                if (front->right) {
                    que.push(front->right);
                }
            }
            result.push_back(level);
        }

        return result;
    }
};
