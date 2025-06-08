class Solution {
public:
    ListNode * removeDuplicates(ListNode *head) {
        ListNode* curr=head;
        ListNode* next=head->next;

        while(next && curr->next) {
            if(curr->val==next->val) {
                //delete the occurence
                ListNode* temp=next;

                if(next->next) {
                    next->next->prev=curr;
                }
                curr->next=next->next;
                //move next to next
                next=next->next;
                delete temp;
            }
            else {
                //move both curr an next to next
                curr=curr->next;
                next=next->next;
            }
        }

        return head;
    }
};
