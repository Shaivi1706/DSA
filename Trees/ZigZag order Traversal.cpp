    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int> > result;

        if(!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        bool ltr=true;

        while(!q.empty()) {
            int size=q.size();
            vector<int> ans(size);

            for(int i=0; i<size; i++) {
                TreeNode* temp=q.front();
                q.pop();
                
                int index;

                if(ltr) index=i;
                else index=size-i-1;

                ans[index]=temp->val;

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            result.push_back(ans);
            ltr=!ltr;
        }
        return result;
    }
