class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr;

        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast->next && fast->next->next) {
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* del=slow->next;
        slow->next=del->next;
        del->next=NULL;

        return head;
    }
};
