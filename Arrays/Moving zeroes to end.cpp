void moveZeroes(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int i=0; 
        int j=nums.size()-1;

        for(int k=0; k<nums.size(); k++) {
            if(nums[k]==0) {
                j--;
            }
            else {
                ans[i]=nums[k];
                i++;
            }
        }
        nums=ans;
    }
