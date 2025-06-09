class Solution {
    TreeNode* flat(TreeNode* root) {
        if(!root || (!root->left && !root->right)) return root;

        flat(root->right);
        flat(root->left);

        TreeNode* left=root->left;
        TreeNode* right=root->right;

        root->left=NULL;
        root->right=left;

        TreeNode* temp=root;
        while(temp->right) {
            temp=temp->right;
        }
        temp->right=right;

        return root;
    }
public:
    void flatten(TreeNode* root) {
        root=flat(root);
    }
};
