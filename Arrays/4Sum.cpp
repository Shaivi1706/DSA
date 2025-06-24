class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        if (nums.size() < 4) return {};
        vector<vector<int>> res;

        //we will confirm only till last 2 left cases
        for(int i=0; i<nums.size()-3; i++) {
            if(i>0 && nums[i]==nums[i-1]) continue;

            for(int j=i+1; j<nums.size()-2; j++) {
                //important to keep j>i+1 otherwise it will be compared to i 
                if(j>i+1 && nums[j]==nums[j-1]) continue;

                int left=j+1;
                int right=nums.size()-1;

                while(left<right) {
                  // large numbers in test case
                    long long sum=(long long)nums[i] + nums[j] + nums[left] + nums[right];

                    if(sum==target) {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});

                        while(left<right && nums[left]==nums[left+1]) left++;
                        while(left<right && nums[right]==nums[right-1]) right--;

                        left++;
                        right--;
                    }
                    else if(sum<target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }
        return res;
    }
};
