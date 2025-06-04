class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, vector<int> > > mp;
        //hd, level, nodes
        queue< pair < TreeNode* , pair<int, int> > > q;
        //node, hd, level

        vector<vector<int> > ans;

        if(root==NULL) return ans;

        q.push(make_pair(root, make_pair(0,0)));

        while(!q.empty()) {
            auto temp = q.front();
            q.pop();

            TreeNode* node = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;

            mp[hd][lvl].push_back(node->val);

            if(node->left) q.push(make_pair(node->left, make_pair(hd-1, lvl+1)));

            if(node->right) q.push(make_pair(node->right, make_pair(hd+1, lvl+1)));
        }

        for(auto i:mp) {
            vector<int> col;
            for(auto j:i.second) {
                sort(j.second.begin(), j.second.end());
                for(auto k:j.second) {
                    col.push_back(k);
                }
            }
            ans.push_back(col);
        }
        return ans;
    }
};
