SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *temp=head;
    SinglyLinkedListNode *newnode=new SinglyLinkedListNode(data);
    if(head==NULL){
        head= newnode;
        return head;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
