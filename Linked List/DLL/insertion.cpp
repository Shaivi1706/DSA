void insertAtHead(node* & head, node* &tail, int d) {
    if(!head) {
        head = new node(d);
        tail = head;
        return ;
    }
    node* n = new node(d);
    n->next=head;
    head->prev=n;
    head=n;
}

void insertAtTail(node* & head, node* &tail, int d) {
    if(!tail) {
        head = new node(d);
        tail = head;
        return ;
    }
    node* n = new node(d);
    tail->next=n;
    n->prev=tail;
    tail=n;
}

void insertAtPos(node* & head, node* &tail, int d, int pos) {
    if(pos==1) {
        insertAtHead(head, tail, d);
        return ;
    }

    node* temp=head;
    for(int i=1; i<pos-1; i++) {
        temp=temp->next;
        if(!temp) {
            cout<<"out of bounds"<<endl;
            return ;
        }
    }

    node* newn = new node(d);
    newn->next=temp->next;
    temp->next=newn;

    newn->prev=temp;
    if(newn->next) {
        newn->next->prev=newn;
    }

    if(!newn->next) tail=newn;
}
