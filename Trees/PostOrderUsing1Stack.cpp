class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;

        if(!root) return ans;

        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()) {
            TreeNode* curr=s.top();
            s.pop();

            ans.push_back(curr->val);

            if(curr->left) s.push(curr->left);
            if(curr->right) s.push(curr->right);
            
        }

        int i=0;
        int j=ans.size()-1;

        while(i<j) {
            swap(ans[i], ans[j]);
            i++;
            j--;
        }
        return ans;
    }
};
