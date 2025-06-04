class Solution {
    pair<bool, int> check(TreeNode* root) {
        //bool will store if height is balanced or not
        //int will store the height
        if(root==NULL) return make_pair(true, 0);

        pair<bool, int> left=check(root->left);
        pair<bool, int> right=check(root->right);

        pair<bool, int> ans;
        ans.second=max(left.second, right.second)+1;

        if(abs(right.second-left.second)<=1 && left.first && right.first) {
            ans.first=true;
        }
        else {
            ans.first=false;
        }

        return ans;
    }
public:
    bool isBalanced(TreeNode* root) {
        pair<bool, int> ans=check(root);
        return ans.first;
    }
};
