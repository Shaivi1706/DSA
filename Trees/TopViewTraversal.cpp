vector<int> topView(TreeNode *root){
        //your code goes here
        map<int, map<int, vector<int> > > mp;
        //hd, level, nodes
        queue< pair < TreeNode* , pair<int, int> > > q;
        //node, hd, level

        vector<int> ans;

        if(root==NULL) return ans;

        q.push(make_pair(root, make_pair(0,0)));

        while(!q.empty()) {
            auto temp = q.front();
            q.pop();

            TreeNode* node = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;

            mp[hd][lvl].push_back(node->data);

            if(node->left) q.push(make_pair(node->left, make_pair(hd-1, lvl+1)));

            if(node->right) q.push(make_pair(node->right, make_pair(hd+1, lvl+1)));
        }

        for(auto i:mp) {
            for(auto j:i.second) {
                sort(j.second.begin(), j.second.end());
                for(auto k:j.second) {
                    ans.push_back(k);
                    
                }
                break;
            }
        }
        return ans;
    }
