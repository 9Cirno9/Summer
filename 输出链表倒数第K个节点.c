/**
 * struct ListNode {
 *  int val;
 *  struct ListNode *next;
 * };
 */
 
/**
 *
 * @param pListHead ListNode类
 * @param k int整型
 * @return ListNode类
 */
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k )
{
    // write code here
    if(!pListHead || k<1)
        return NULL;
    int time=k;
    struct ListNode *head=pListHead;
    struct ListNode *tail=pListHead;
     
    while(time>1)
    {
        if(head->next!=NULL)
        {
            head=head->next;
            time--;
        }
        else
        {
            return NULL;
        }
    }
     
    while(head->next!=NULL)
    {
        head=head->next;
        tail=tail->next;
    }
     
    return tail;
}
