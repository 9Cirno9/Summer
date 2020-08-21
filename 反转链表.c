struct ListNode* ReverseList(struct ListNode* pHead ) {
    // write code here
    struct ListNode *ptr=pHead;
    struct ListNode *tmp=NULL,*rhead=NULL;
    while(ptr!=NULL)
    {
        tmp = ptr->next;
        ptr->next = rhead;
        rhead = ptr;
        ptr = tmp;
    }
    return rhead;
}
