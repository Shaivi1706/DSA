class Solution {
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans) {
        //base case
        if(index>=nums.size()) {
            ans.push_back(output);
            return ;
        }

        //recursive case
        //exclude
        solve(nums, output, index+1, ans);

        //include
        int ele=nums[index];
        output.push_back(ele);
        solve(nums, output, index+1, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(nums,output,index,ans);
        return ans;
    }
};
