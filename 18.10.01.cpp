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
        DFS(root, diameter);
        return diameter;
    }
    
    int DFS(TreeNode* root, int &diameter) {
        if (!root) return 0;
        
        int left = DFS(root->left, diameter);
        int right = DFS(root->right, diameter);
        
        // update diameter at this node
        diameter = max(diameter, left + right);
        
        // return height of current node
        return 1 + max(left, right);
    }
};
