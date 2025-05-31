ListNode* middleNode(ListNode* head) {
        ListNode* pro=head;
        ListNode* slow=head;

        while(pro!=NULL && pro->next!=NULL) {
            pro=pro->next->next;
            slow=slow->next;
        }
        return slow;
    }
