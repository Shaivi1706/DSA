class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=nums[0];
        for(int i=0; i<nums.size(); i++) {
            if(min>nums[i]) {
                min=nums[i];
                break;
            }
        }
        return min;
    }
};

// optimised binary search soln.
class Solution {
public:
    int findMin(vector<int>& nums) {
        int st=0;
        int e=nums.size()-1;

        while(st<e) {
            int mid=st+(e-st)/2;

            if(nums[mid]>nums[e]) {
                st=mid+1;
            }
            else {
                e=mid;
            }
        }

        return nums[st];
    }
};
