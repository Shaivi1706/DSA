class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(k>nums.size()) return -1;
        priority_queue<int> pq;
        for(auto i:nums) {
            pq.push(i);
        }

        for(int i=0; i<k-1; i++) {
            pq.pop();
        }
        return pq.top();
    }
};
