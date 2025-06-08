ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return nullptr;

        ListNode* temp;

        while(headA) {
            temp=headB;
            while(temp) {
                if(temp==headA) return headA;
                else temp=temp->next;
            }
            headA=headA->next;
        }

        return NULL;
    }

___________________________________________________________________________

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return nullptr;

        ListNode* a=headA;
        ListNode* b=headB;

        while(a!=b) {
            if(a==NULL) {
                a=headB;
            }
            else {
                a=a->next;
            }

            if(b==NULL) {
                b=headA;
            }
            else {
                b=b->next;
            }
        }

        return a;
    }
};
