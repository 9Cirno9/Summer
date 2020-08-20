/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 * 
 * @param head ListNodeÀà 
 * @return bool²¼¶ûĞÍ
 */#include<stdbool.h>
bool hasCycle(struct ListNode* head ) {
    // write code here
    struct ListNode *a=head,*b=head;
    while((b->next!=NULL)&&(b!=NULL))
    {
        a=a->next;
        b=b->next->next;
        if(a==b)
            return true;
    }
    return false;
}
