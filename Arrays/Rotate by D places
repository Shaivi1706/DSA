void rotate(vector<int>& nums, int k) {
        vector<int> rotated(nums.size(), 0);

        for(int i=0; i<nums.size(); i++) {
            int a = (i+k)%nums.size();
            rotated[a]=nums[i];
        }
        nums=rotated;
    }
