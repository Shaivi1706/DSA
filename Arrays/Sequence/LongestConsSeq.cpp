class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count=1;
        int maxCount=1;

        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i]+1==nums[i+1]) {
                count++;
            }
            else if(nums[i] == nums[i+1]) {
                continue;
            }
            else {
                maxCount=max(maxCount, count);
                count=1;
            }
        }
        maxCount=max(count, maxCount);

        return maxCount;
    }
};
