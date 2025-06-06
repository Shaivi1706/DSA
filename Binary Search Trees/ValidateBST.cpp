class Solution {
    bool checking(TreeNode* root, long long min, long long max) {
        if(!root) return true;

        if(root->val<=min || root->val>=max) return false;

        bool left=checking(root->left, min, root->val);
        bool right=checking(root->right, root->val, max);

        return left && right;
    }
public:
    bool isValidBST(TreeNode* root) {
        return checking(root, LLONG_MIN, LLONG_MAX);
    }
};
