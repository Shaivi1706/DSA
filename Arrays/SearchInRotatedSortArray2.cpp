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



// 2nd soln
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int st=0;
        int e=nums.size()-1;

        while(st<=e) {
            int mid=st+(e-st)/2;

            if(nums[mid]==target) {
                return true;
            }

            if (nums[st] == nums[mid] && nums[mid] == nums[e]) {
                st++;
                e--;
            }

            else if(nums[st]<=nums[mid]) {
                if(target>=nums[st] && target<nums[mid]) {
                    e=mid-1;
                }
                else {
                    st=mid+1;
                }
            }
            else {
                if(target<=nums[e] && target>nums[mid]) {
                    st=mid+1;
                }
                else {
                    e=mid-1;
                }
            }
        }
        return false;
    }
};
