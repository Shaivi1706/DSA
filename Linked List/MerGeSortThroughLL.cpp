node* mid(node* head) {
    node* slow=head;
    node* fast=head->next;

    while(fast && fast->next) {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

node* merge(node* left, node* right) {
    if(!left) return right;
    if(!right) return left;

    node* ans=new node(-1);
    node* tail=ans;

    node* l=left;
    node* r=right;

    while(l && r) {
        if(l->data>r->data) {
            tail->next=r;
            r=r->next;
        }
        else {
            tail->next=l;
            l=l->next;
        }
        tail=tail->next;
    }

    while(l) {
        tail->next=l;
        l=l->next;
        tail=tail->next;
    }

    while(r) {
        tail->next=r;
        r=r->next;
        tail=tail->next;
    }

    return ans->next;
}
node* mergeSort(node*& head) {
    if(!head || !head->next) return head;

    node* middle=mid(head);
    node* left=head;
    node* right=middle->next;
    middle->next=NULL;

    left=mergeSort(left);
    right=mergeSort(right);

    node* ans=merge(left, right);

    return ans;
}
