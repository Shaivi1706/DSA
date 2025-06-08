void deletion(node* &head, node* &tail, int pos) {
    if(pos==1) {
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return ;
    }

    node* temp=head;
    node* prev=NULL;
    for(int i=1; i<pos; i++) {
        prev=temp;
        temp=temp->next;
        if(!temp) {
            cout<<"out of bound";
            return ;
        }
    }

    prev->next=temp->next;
    if(temp->next) temp->next->prev=temp->prev;

    temp->next=NULL;
    temp->prev=NULL;

    delete temp;  
}
