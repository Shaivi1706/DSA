class Solution {
    ListNode* insert(ListNode* &head, ListNode* &tail, int d) {
        ListNode* node = new ListNode(d);
        if (!head) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
        return head;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head;
        ListNode* ans;

        int count=0;

        while(l1 && l2) {
            int d =  l1->val + l2->val + count;

            insert(head, ans, d%10);
            count=d/10;

            l1=l1->next;
            l2=l2->next;
        }

        while(l1) {
            int d =  l1->val + count;

            insert(head, ans, d%10);
            count=d/10;

            l1=l1->next;
        }

        while(l2) {
            int d = l2->val + count;

            insert(head, ans, d%10);
            count=d/10;

            l2=l2->next;
        }

        if(count!=0) {
            insert(head, ans, count);
        }
        return head;
    }
};
