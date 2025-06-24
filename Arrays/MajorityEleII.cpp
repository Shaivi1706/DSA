class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> fre;

        for(int i=0; i<nums.size(); i++) {
            fre[nums[i]]++;
        }

        int n=nums.size()/3;

        vector<int> ans;
        for(auto i:fre) {
            if(i.second>n) {
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};
