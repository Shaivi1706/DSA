class Solution {
    int length(ListNode* head) {
        int count=0;
        while(head) {
            count++;
            head=head->next;
        }
        return count;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=length(head);

        if(count==1 && n==1) return NULL;

        int k=count-n;
        if(k==0) return head->next;
        
        ListNode* curr=head;
        ListNode* prev=NULL;

        for(int i=0; i<k; i++) {
            prev=curr;
            curr=curr->next;
        }

        if(!curr->next) {
            prev->next=NULL;
        }
        else {
            prev->next=curr->next;
            curr->next=NULL;
        }
        
        return head;

    }
};
