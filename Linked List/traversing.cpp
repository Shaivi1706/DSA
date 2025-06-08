void traversing(node* head) {
    if(!head) return;

    cout<<head->data<<" ";
    traversing(head->next);
}

void traversing(node* head) {
    node* temp=head;

    while(temp) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
