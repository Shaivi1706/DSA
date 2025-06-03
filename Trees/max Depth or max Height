int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;

        int h1=maxDepth(root->left);
        int h2=maxDepth(root->right);

        int maxi=max(h1, h2)+1;

        return maxi;
    }
