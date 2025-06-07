class Solution {
    void findPredSucc(TreeNode* root, int key, TreeNode*& pred, TreeNode*& succ) {
        if (!root) return;

        if (root->data == key) {
            // For predecessor
            if (root->left) {
                TreeNode* temp = root->left;
                while (temp->right) temp = temp->right;
                pred = temp;
            }

            // For successor
            if (root->right) {
                TreeNode* temp = root->right;
                while (temp->left) temp = temp->left;
                succ = temp;
            }
        } else if (key < root->data) {
            succ = root;
            findPredSucc(root->left, key, pred, succ);
        } else {
            pred = root;
            findPredSucc(root->right, key, pred, succ);
        }
    }

public:
    pair<int, int> inorderPredSucc(TreeNode* root, int key) {
        TreeNode* pred = nullptr;
        TreeNode* succ = nullptr;
        findPredSucc(root, key, pred, succ);

        int predVal = pred ? pred->data : -1;
        int succVal = succ ? succ->data : -1;

        return {predVal, succVal};
    }
};
