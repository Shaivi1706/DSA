//Approach 1
unordered_map<ListNode*, bool> mp;

        ListNode* temp=head;
        while(temp) {
            if(mp[temp]) return temp;
            mp[temp]=true;
            temp=temp->next;
        }
        return NULL;

//Approach 2
ListNode* detectCycle(ListNode *head) {
    ListNode *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            // Cycle detected. Now find the entry point.
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL; // No cycle
}
