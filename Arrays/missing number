int missingNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int a=0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]!=a) {
                return a;
            }
            a++;
        }
        return a;
    }
O(N) time complexity. better ways to do this.
XOR WAY
