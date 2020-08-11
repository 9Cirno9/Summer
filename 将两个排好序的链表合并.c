/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 * 
 * @param pHead1 ListNodeÀà 
 * @param pHead2 ListNodeÀà 
 * @return ListNodeÀà
 */
struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2 ) {
    if(pHead1==NULL)
            return pHead2;
       else if(pHead2==NULL)
            return pHead1;
    struct ListNode* p3=NULL;
    if(pHead1->val<pHead2->val)
    {
        p3=pHead1;
        p3->next=Merge(pHead1->next,pHead2);
    }
    else
    {
        p3=pHead2;
        p3->next=Merge(pHead2->next,pHead1);
    }
    return p3;
}
