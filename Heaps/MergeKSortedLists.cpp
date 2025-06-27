class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;

        for(auto i:lists) {
            ListNode* curr=i;

            while(curr) {
                pq.push(curr->val);
                curr=curr->next;
            }
        }

        ListNode* ans=new ListNode(-1);
        ListNode* tail=ans;

        while(!pq.empty()) {
            tail->next=new ListNode(pq.top());
            tail=tail->next;
            pq.pop();
        }

        return ans->next;
    }
};
