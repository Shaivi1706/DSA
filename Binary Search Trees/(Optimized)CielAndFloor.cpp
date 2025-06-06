class Solution{	
	public:
		vector<int> floorCeilOfBST(TreeNode* root,int key){
			//your code goes here
            vector<int> ans(2);
            int cielAns=-1;
            int floorAns=-1;

            TreeNode* node=root;

            while(node) {
                if(node->data==key) {
                    cielAns=floorAns=node->data;
                    return ans;
                    break;
                }
                if(node->data>key) {
                    cielAns=node->data;
                    node=node->left;
                }
                else{
                    floorAns=node->data;
                    node=node->right;
                }
            } 

            return ans;
            
		}
};
