class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        map<int, int> mp;
        //lvl, node->val
        queue< pair<TreeNode*, int> > q;

        vector<int> ans;
        if(!root) return ans;

        q.push({root, 0});

        while(!q.empty()) {
            auto temp = q.front();
            q.pop();

            TreeNode* node = temp.first;
            int lvl = temp.second;

            mp[lvl]=node->val;

            if(node->left) q.push({node->left, lvl+1});
            if(node->right) q.push({node->right, lvl+1}); 
        }

        for(auto i:mp) {
            ans.push_back(i.second);
        }
        return ans;
    }
};
