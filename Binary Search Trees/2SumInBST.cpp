class Solution {
    vector<int> inorder(TreeNode* root, vector<int>& ans) {
        if(root==NULL) return ans;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);

        return ans;
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root, ans);

        int i=0;
        int j=ans.size()-1;

        while(i<j) {
            int a = ans[i] + ans[j];

            if(a==k) return true;
            else if(a>k) j--;
            else i++;
        }
        return false;
    }
};
