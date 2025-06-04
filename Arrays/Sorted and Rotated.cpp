bool check(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i]>nums[i+1]) {
                count++;
            }
        }

        if(count==1 && nums[nums.size()-1]<=nums[0]) {
            return true;
        }
        if(count==0) {
            return true;
        }
        return false;
    }
