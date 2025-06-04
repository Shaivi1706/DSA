vector <int> bottomView(TreeNode *root){
        map<int, int > mp;
        //hd, nodes
        queue< pair < TreeNode* , int > > q;
        //node, hd

        vector<int> ans;

        if(root==NULL) return ans;

        q.push(make_pair(root, 0));

        while(!q.empty()) {
            auto temp = q.front();
            q.pop();

            TreeNode* node = temp.first;
            int hd = temp.second;

            mp[hd]=node->data;

            if(node->left) q.push(make_pair(node->left, hd-1));

            if(node->right) q.push(make_pair(node->right, hd+1));
        }

        for(auto i:mp) {
            ans.push_back(i.second);
        }
        return ans;
    }
