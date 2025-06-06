class Solution {
    vector<int> inorder(TreeNode* root, vector<int> & ans) {
        if(!root) return ans;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);

        return ans;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;

        ans=inorder(root, ans);

        return ans[k-1];
    }
};
