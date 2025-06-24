class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> ans;
      ans.push_back(nums[nums.size()-1]);
      int count=0;

      for(int i=nums.size()-2; i>=0; i--) {
        if(nums[i]>ans[count]) {
            ans.push_back(nums[i]);
            count++;
        }
      }
      
      int i=0, j=ans.size()-1;
      while(i<j) {
        swap(ans[i], ans[j]);
        i++;
        j--;
      }

      return ans;
    }
};
