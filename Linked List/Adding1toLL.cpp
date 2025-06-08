class Solution {
    ListNode* recursive(ListNode* head, ListNode* prev) {
        if (!head) return prev;

        ListNode* temp = head->next;
        head->next = prev;
        return recursive(temp, head);
    }

    ListNode* reverse(ListNode* head) {
        return recursive(head, NULL);
    }

public:
    ListNode* addOne(ListNode* head) {
        head = reverse(head);

        ListNode* temp = head;
        int carry = 1;

        ListNode* prev = NULL;

        while (temp && carry) {
            int sum = temp->val + carry;
            temp->val = sum % 10;
            carry = sum / 10;
            prev = temp;
            temp = temp->next;
        }

        if (carry) {
            prev->next = new ListNode(carry);
        }

        return reverse(head);
    }
};
