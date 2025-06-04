class Solution {
    bool mirror(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if(!p || !q) return false;
        if(p->val != q->val) return false;

        return mirror(p->left, q->right) && mirror(p->right, q->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;

        return mirror(root->left, root->right);
    }
};
