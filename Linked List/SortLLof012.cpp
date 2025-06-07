class Solution {
public:
    ListNode *sortList(ListNode *head) {
        int c0=0, c1=0, c2=0;

        ListNode* temp=head;

        while(temp) {
            if(temp->val==0) c0++;
            else if(temp->val==1) c1++;
            else c2++;
            temp=temp->next;
        }

        temp=head;
        
            while(c0>0) {
                temp->val=0;
                c0--;
                temp=temp->next;
            }
            while(c1>0) {
                temp->val=1;
                c1--;
                temp=temp->next;
            }
            while(c2>0) {
                temp->val=2;
                c2--;
                temp=temp->next;
            }
        
        return head;
    }
};
