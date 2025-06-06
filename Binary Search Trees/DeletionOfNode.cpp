class Solution {
    TreeNode* mini(TreeNode* root) {

        while(root && root->left) {
            root=root->left;
        }
        return root;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
     if(!root) return root;

     if(root->val>key) {
        root->left=deleteNode(root->left, key);
     }   
     else if(root->val<key) {
        root->right=deleteNode(root->right, key);
     }
     else {
        //0 child
        if(!root->left && !root->right) {
            delete root;
            return NULL;
        }
          //1 child
        else if(!root->left) {
            TreeNode* temp=root->right;
            delete root;
            return temp;
        }
        else if(!root->right) {
            TreeNode* temp=root->left;
            delete root;
            return temp;
        }
          //2 child
        else {
            TreeNode* temp=mini(root->right);
            root->val=temp->val;
            root->right=deleteNode(root->right, temp->val);
        }
     }
     return root;
    }
};
