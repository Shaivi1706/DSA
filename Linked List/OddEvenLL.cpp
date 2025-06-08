class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;
        
        ListNode* odd=new ListNode(-1);
        ListNode* even=new ListNode(-1);
        ListNode* tailOdd=odd;
        ListNode* tailEven=even;
        ListNode* temp=head;

        int i=0;
        while(temp) {
            if(i%2==0) {
                //odd
                tailOdd->next=temp;
                tailOdd=temp;
            }
            else {
                //even
                tailEven->next=temp;
                tailEven=temp;
            }
            temp=temp->next;
            i++;
        }

      //setting this is important as even list might be pointing to some other odd node.
        tailEven->next = NULL;
        tailOdd->next=even->next;
        return odd->next;
    }
};
