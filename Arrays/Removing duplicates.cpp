We can first sort the array as well.
Also we are here using two pointers technique : first pointer in vector and second pointer at the place where replacement should occur.
This is optimized way. Initial way was to use tc O(n^2) and sc O(n)

int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;

        int k=1;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i-1] != nums[i]) {
                nums[k]=nums[i];
                k++;
            }
        }      
        return k;
    }
