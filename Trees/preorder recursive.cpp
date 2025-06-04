class Solution {
    vector<int> preorder(TreeNode* root, vector<int>& ans) {
        if(root==NULL) return ans;

        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);

        return ans;
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;

        ans=preorder(root, ans);
        return ans;
    }
};
