class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<int> ans;
        vector<int> result;

        if(!root) return result;

        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()) {
            TreeNode* curr=s.top();
            s.pop();

            ans.push(curr->val);

            if(curr->left) s.push(curr->left);
            if(curr->right) s.push(curr->right);
            
        }


        while(!ans.empty()) {
            result.push_back(ans.top());
            ans.pop();
        }
        return result;
    }
};
