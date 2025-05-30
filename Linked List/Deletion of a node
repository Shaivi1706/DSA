////Leetcode medium tricky question 
//problem 237

void deleteNode(ListNode* node) {
        ListNode* temp=node->next;
        node->val=node->next->val;
        node->next=node->next->next;
        delete temp;
    }
