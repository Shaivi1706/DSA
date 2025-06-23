class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int minPrice = nums[0];
        int diff = 0;
        
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] < minPrice) {
                minPrice = nums[j];
            } else {
                diff = max(diff, nums[j] - minPrice);
            }
        }
        return diff;
    }
};
