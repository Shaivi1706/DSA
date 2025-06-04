class Solution {
    pair<int, int> diameter(TreeNode* root) {
        //first int for storing height
        //second int for storing diameter

        if(!root) return make_pair(0,0);

        pair<int, int> left=diameter(root->left);
        pair<int, int> right=diameter(root->right);

        pair<int, int> ans;
        ans.first=max(left.first, right.first) +1;
        int dia=left.first+right.first;
        ans.second=max(left.second, max(right.second, dia));

        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int, int> ans=diameter(root);
        return ans.second;
    }
};
