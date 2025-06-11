class Solution {
//recursive function
    ListNode* reverseGroup(ListNode* head, int k) {
        if(!head) return head;

      // first we will check if we have to reverse it or not
        ListNode* temp=head;
        int count=0;

        while(temp && count<k) {
            temp=temp->next;
            count++;
        }
      // if it has to be reversed then we will do steps otherwise just return head
        if(count==k) {
            ListNode* curr=head;
            ListNode* prev=NULL;
            ListNode* next=NULL;
            int count=0;
      // reversing the list
            while(curr && count<k) {
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                count++;
            }
      // if further list exists, we will do recursion
            if(next) head->next=reverseGroup(next, k);
      // otherwise we will return the list
            return prev;
        }
        return head;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        return reverseGroup(head, k);
    }
};
