class Solution {	
    int floor(TreeNode* root, int key, int &floorAns) {
        if (!root) return floorAns;

        if (root->data == key) {
            floorAns = root->data;
            return floorAns;
        }

        if (root->data < key) {
            floorAns = root->data;
            return floor(root->right, key, floorAns);
        } else {
            return floor(root->left, key, floorAns);
        }
    }

    int ceil(TreeNode* root, int key, int &ceilAns) {
        if (!root) return ceilAns;

        if (root->data == key) {
            ceilAns = root->data;
            return ceilAns;
        }

        if (root->data > key) {
            ceilAns = root->data;
            return ceil(root->left, key, ceilAns);
        } else {
            return ceil(root->right, key, ceilAns);
        }
    }

public:
    vector<int> floorCeilOfBST(TreeNode* root, int key) {
        vector<int> ans(2, -1);
        int floorAns = -1;
        int ceilAns = -1;

        ans[0] = floor(root, key, floorAns);
        ans[1] = ceil(root, key, ceilAns);

        return ans;
    }
};
