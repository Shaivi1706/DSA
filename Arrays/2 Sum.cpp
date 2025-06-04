vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2, -1);

        for(int i=0; i<nums.size(); i++) {
            int comp = target - nums[i];
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[j]==comp) {
                    ans[0]=i;
                    ans[1]=j;
                    break;
                }
            }
        }
        return ans;
    }
