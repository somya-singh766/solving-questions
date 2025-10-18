class Solution {
public:
    bool helperBST(TreeNode* root, long min, long max){
        if(root==nullptr) return true;
        if(root->val <= min or root->val >= max){
            //not inside the limits
            return false;
        } else{
            return helperBST(root->left, min, root->val) and helperBST(root->right, root->val, max);
        }
    }
    bool isValidBST(TreeNode* root) {
        return helperBST(root, LONG_MIN, LONG_MAX);
    }
};
