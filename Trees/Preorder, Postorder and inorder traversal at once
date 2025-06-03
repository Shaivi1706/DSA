class Solution {
    void preorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return;
        ans.push_back(root->data);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    void inorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return;
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }

    void postorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return;
        postorder(root->left, ans);
        postorder(root->right, ans);
        ans.push_back(root->data);
    }

public:
    vector<vector<int>> treeTraversal(TreeNode* root) {
        vector<int> ino, pre, post;
        vector<vector<int>> ans;

        inorder(root, ino);
        preorder(root, pre);
        postorder(root, post);

        ans.push_back(ino);
        ans.push_back(pre);
        ans.push_back(post);

        return ans;
    }
};
