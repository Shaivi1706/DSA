// 1st soln
class Solution {
    int pivot(vector<int> nums) {
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i]>nums[i+1]) {
                return i+1;
            }
        }
        return -1;
    }

    bool binarySearch(vector<int>& nums, int s, int e, int k) {
        if(s>e) return false;

        int mid = s + (e-s)/2;

        if(nums[mid]==k) return true;
        else if(nums[mid]>k) return binarySearch(nums, s, mid-1, k);
        else return binarySearch(nums, mid+1, e, k);

        return false;
    }
public:
    bool search(vector<int>& nums, int k) {
        int n=pivot(nums);

        if(n==-1) {
            return binarySearch(nums, 0, nums.size()-1, k);
        }

        bool a=binarySearch(nums, 0, n-1, k);
        bool b=binarySearch(nums, n, nums.size()-1, k);

        return a||b;
    }
};
