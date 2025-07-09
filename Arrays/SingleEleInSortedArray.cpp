class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i+=2) {
            if(nums[i]!=nums[i+1]) {
                return nums[i];
            }
        }
        
        return nums[nums.size()-1];
    }
};

//optimized with binary search
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st=0;
        int e=nums.size()-1;

        while(st<e) {
            int mid=st+(e-st)/2;

            if(mid%2==1) mid--;

            if(nums[mid]==nums[mid+1]) {
                st=mid+2;
            }
            else {
                e=mid;
            }
        }

        return nums[st];
    }
};
