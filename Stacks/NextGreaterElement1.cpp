class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        stack<int> temp;

        for(int i=0; i<nums2.size(); i++) {
            s.push(nums2[i]);
        }

        vector<int> ans(nums1.size());

        for(int i=0; i<nums1.size(); i++) {
            int max=-1;
            temp=s;

            while(temp.top()!=nums1[i]) {
                if(temp.top()>nums1[i]) {
                    max=temp.top();
                }
                temp.pop();
            }

            ans[i]=max;
        }

        return ans;
    }
};
