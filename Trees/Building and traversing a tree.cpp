class TreeNode {
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

TreeNode* buildTree(TreeNode* root) {
    int d;
    cout<<"Enter data: ";
    cin>>d;
    root=new TreeNode(d);

    if(d==-1) return NULL;

    cout<<"Enter data for left part: ";
    root->left=buildTree(root->left);

    cout<<"Enter data for right part: ";
    root->right=buildTree(root->right);

    return root;
}

void treeTraversal(TreeNode* root) {
    if(root==NULL) return;

    //we will use queue for traversal 
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        TreeNode* node=q.front();
        q.pop();

        if(node==NULL) {
            //move the cursor to next line
            cout<<endl;
            //if queue is not empty, means there are more values, so we will add null to last
            if(!q.empty()) q.push(NULL);
        }
        else {
            //add left and right part of the root
            cout<<node->data<<" ";
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
    }
}

int main() {
    TreeNode* root=buildTree(root);
    
    treeTraversal(root);
}
