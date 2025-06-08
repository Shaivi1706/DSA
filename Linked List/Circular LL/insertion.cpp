void insertion(node* tail, int d) {
    if(!tail) {
        tail = new node(d);
        return ;
    }

    //then move to the point where you want to insert the new node
    //here i am taking that is has to be added after tail because the result will remain the same
    node* newn=new node(d);
    newn->next=tail->next;
    tail->next=newn;
}
