class Solution {
    int piv(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i]>nums[i+1]) {
                return i+1;
            }
        }
        return -1;
    }
    int binarySearch(vector<int> nums, int target, int start, int end) {
        if(start>end) return -1;

        int mid = start + (end - start) / 2;

        if(target==nums[mid]) return mid;
        else if(target>nums[mid]) return binarySearch(nums, target, mid+1, end);
        else return binarySearch(nums, target, start, mid-1);

        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int pivot=piv(nums);

        if(pivot==-1) return binarySearch(nums, target, 0, nums.size()-1);

        int a = binarySearch(nums, target, 0, pivot-1);
        int b = binarySearch(nums, target, pivot, nums.size()-1);

        if(a==-1) return b;

        return a;
    }
};
