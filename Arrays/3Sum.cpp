class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        //we will confirm only till last 2 left cases
        for(int i=0; i<nums.size()-2; i++) {
            //avoiding duplicates
            if(i>0 && nums[i]==nums[i-1]) continue;

            int left=i+1;
            int right=nums.size()-1;

            while(left<right) {
                int sum=nums[left]+nums[right]+nums[i];

                if(sum==0) {
                    res.push_back({nums[i], nums[left], nums[right]});
                    //avoiding duplicates
                    while(left<right && nums[left]==nums[left+1]) left++;
                    while(left<right && nums[right]==nums[right-1]) right--;
                    left++;
                    right--;
                }
                else if(sum<0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
        return res;
    }
};
