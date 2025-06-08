void deleteNode(node* &head, node* &tail, int pos) {
    if(pos==1) {
        node* temp=head;
        head=head->next;
        delete temp;
        return ;
    }

    node* temp=head;
    node* prev=NULL;
    for(int i=1; i<pos; i++) {
        prev=temp;
        temp=temp->next;

        if(!temp) {
            cout<<"out of range"<<endl;
            return ;
        }
    }

    prev->next=temp->next;

    if(temp==tail) {
        tail=prev;
    }

    temp->next=NULL;
    delete temp;

}
