TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root==p || root==q) return root;

        TreeNode* left=lowestCommonAncestor(root->left, p, q);
        TreeNode* right=lowestCommonAncestor(root->right, p, q);

        if(left && right) return root;
        else if(left) return left;
        else if(right) return right;
        else return NULL;

        return root;
    }

________________________________________________________________________________

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return nullptr;

        if(root->val>p->val && root->val>q->val) {
            return lowestCommonAncestor(root->left, p, q);
        }

        if(root->val < p->val && root->val < q->val) {
            return lowestCommonAncestor(root->right, p, q);
        }

        return root;
    }
