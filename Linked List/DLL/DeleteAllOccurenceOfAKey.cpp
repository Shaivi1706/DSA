class Solution {
public:
    ListNode * deleteAllOccurrences(ListNode* head, int target) {
        if(!head) return head;

        ListNode* curr=head;
        ListNode* prev=NULL;

        while(curr && curr->val==target) {
            ListNode* temp=curr;
            curr=curr->next;
            if(curr) curr->prev=NULL;
            delete temp;
        }
        head=curr;

        while(curr) {
            if(curr->val==target) {
                ListNode* temp=curr;
                if(curr->next) {
                    curr->next->prev=prev;
                }

                if(prev) {
                    prev->next=curr->next;
                }

                curr=curr->next;
                delete temp;
            }

            else {
                prev=curr;
                curr=curr->next;
            }
            
        }

        return head;
    }
};
