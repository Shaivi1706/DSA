void insertAtHead(node*& head, node* &tail, int d) {
    if(!head) {
        head = new node(d);
        tail=head;
        return;
    }

    node* new_node = new node(d);
    new_node->next=head;
    head=new_node;
}

void insertAtTail(node*& head, node* &tail, int d) {
    if(!tail) {
        tail = new node(d);
        head=tail;
        return ;
    }

    node* new_node = new node(d);
    tail->next=new_node;
    tail=new_node;
}

void insertAtPos(node*& head, node* &tail, int d, int pos) {
    if(pos==1) {
        insertAtHead(head, tail, d);
        return ;
    }

    node* temp=head;
    for(int i=0; i<pos-1; i++) {
        temp=temp->next;
        if(!temp) cout<<"position out of range"<<endl;
    }

    node* new_node = new node(d);

    new_node->next=temp->next;
    temp->next=new_node;

    if (new_node->next == NULL) {
        tail = new_node;
    }
}
