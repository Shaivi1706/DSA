int secondLargestElement(vector<int>& nums) {
        if (nums.size()<2) return -1;

        int firstMax=INT_MIN;
        int secMax=INT_MIN;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i]>firstMax) {
                secMax=firstMax;
                firstMax=nums[i];
            }

            else if(nums[i]>secMax && nums[i]<firstMax) {
                secMax=nums[i];
            }
        }

        if(secMax==INT_MIN) return -1;
        return secMax;
    }
