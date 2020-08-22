/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 * 
 * @param head ListNodeÀà 
 * @return ListNodeÀà
 */
struct ListNode* detectCycle(struct ListNode* head ) {
    // write code here
    struct ListNode *p1 = head;
    struct ListNode *p2 = head;
    while(p2 != NULL && p2->next != NULL)
    {
        p1=p1->next;
        p2=p2->next->next;
        if(p2==p1)
        {
            p2 = head;
            while(p2!=p1)
            {
                p1=p1->next;
                p2=p2->next;
            }
            return p2;
        }
    }
    return NULL;
}
