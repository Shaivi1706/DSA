class Solution {
    ListNode* mid(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast && fast->next) {
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow;
    }
    ListNode* merge(ListNode* a, ListNode* b) {
        if(!a) return b;
        if(!b) return a;

        ListNode* ans=new ListNode(-1);
        ListNode* tail=ans;

        while(a && b) {
            if(a->val<b->val) {
                tail->next=a;
                tail=a;
                a=a->next;
            }
            else {
                tail->next=b;
                tail=b;
                b=b->next;
            }
        }

        while(a) {
            tail->next=a;
            tail=a;
            a=a->next;
        }

        while(b) {
            tail->next=b;
            tail=b;
            b=b->next;
        }

        return ans->next;
    }
    ListNode* mergeSort(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* midd=mid(head);
        ListNode* left=head;
        ListNode* right=midd->next;
        midd->next=NULL;

        left=mergeSort(left);
        right=mergeSort(right);

        return merge(left, right);
    }
public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        return mergeSort(head);
    }
};
