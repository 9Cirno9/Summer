/**
 * struct ListNode {
 *  int val;
 *  struct ListNode *next;
 * };
 */
 
/**
 *
 * @param head ListNode类
 * @return  void
 */
void reorderList(struct ListNode* head){
    if (head == NULL || head->next == NULL){
        return;//传参检查
    }
    struct ListNode* mid = head;//待排链表中点
    struct ListNode* tail = head;
    while(tail->next != NULL && tail->next->next != NULL)
    //这里先判断tail->next,避免tail->next->next报空指针引用错误
    {//寻找链表中点
        mid = mid->next;
        tail = tail->next->next;
    }
    struct ListNode* reverse_head = mid->next;//后半段 待反转的链表头
    mid->next = NULL;//分开为两段链表
    struct ListNode* ptr = reverse_head->next;//指向当前结点的下一个结点
    struct ListNode* tmp = NULL;//暂存指针
    reverse_head->next = NULL;//成为反转后的链表尾部
    while (ptr != NULL)
    {//反转后半段链表
        tmp = ptr->next;
        ptr->next = reverse_head;//反转
        reverse_head = ptr;//移动至下一个结点
        ptr = tmp;
    }//反转结束后 reverse_head 指向 后半段 反转后的链表头
    ptr = head;//前半段链表头
    struct ListNode* Next = NULL;//暂存指针
    while (ptr != NULL && reverse_head != NULL)
    {//重排链表->将前后两段链表合并
        Next = ptr->next;
        ptr->next = reverse_head;//插入结点
        ptr = Next;
        tmp = reverse_head->next;
        reverse_head->next = Next;//插入结点
        reverse_head = tmp;
    }//合并完毕 head 即为重排后新链表的头
}
