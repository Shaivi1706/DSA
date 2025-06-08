class Solution {
    ListNode* recursive(ListNode* head, ListNode* prev) {
        if(!head) return prev;
        ListNode* temp=head->next;
        head->next=prev;

        return recursive(temp, head);
    }

public:
    ListNode* reverseList(ListNode* head) {
        return recursive(head, NULL);
    }
};
