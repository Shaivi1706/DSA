class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxpro=nums[0];
        int currpro=nums[0];
        int negpro=nums[0];

        for(int i=1; i<nums.size(); i++) {
            int temp=negpro;
            negpro=min(nums[i], min(negpro*nums[i], currpro*nums[i]));
            currpro=max(nums[i], max(currpro*nums[i], temp*nums[i]));

            maxpro=max(maxpro, currpro);
        }

        return maxpro;
    }
};
