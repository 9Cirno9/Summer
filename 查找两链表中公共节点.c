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
struct ListNode* FindFirstCommonNode(struct ListNode* pHead1, struct ListNode* pHead2 ) {
    // write code here
    if (pHead1 == NULL || pHead2 == NULL) {
        return NULL;
    }
    struct ListNode *p1,*p2;
    p1=pHead1;
    p2=pHead2;
    while(p1!=p2)
    {
        p2=p2->next;
        if(p2==NULL)
        {
            p2=pHead2;
            p1=p1->next;
        }
        if(p1==NULL)
        return NULL;
    }
    return p1;
}
