vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;

        if(!root) return ans;

        stack<TreeNode*> s;
        
        TreeNode* curr=root;

        while(curr!=NULL || !s.empty()) {
            while(curr!=NULL) {
                s.push(curr);
                curr=curr->left;
            }

            curr=s.top();
            ans.push_back(curr->val);
            s.pop();

            curr=curr->right;
        }
        return ans;
    }
