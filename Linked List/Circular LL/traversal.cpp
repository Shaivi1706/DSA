void traversal(node* tail) {
    node* temp=tail;
    while(temp->next!=tail) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
