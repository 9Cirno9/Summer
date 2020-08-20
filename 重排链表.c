/**
 * struct ListNode {
 *  int val;
 *  struct ListNode *next;
 * };
 */
 
/**
 *
 * @param head ListNode��
 * @return  void
 */
void reorderList(struct ListNode* head){
    if (head == NULL || head->next == NULL){
        return;//���μ��
    }
    struct ListNode* mid = head;//���������е�
    struct ListNode* tail = head;
    while(tail->next != NULL && tail->next->next != NULL)
    //�������ж�tail->next,����tail->next->next����ָ�����ô���
    {//Ѱ�������е�
        mid = mid->next;
        tail = tail->next->next;
    }
    struct ListNode* reverse_head = mid->next;//���� ����ת������ͷ
    mid->next = NULL;//�ֿ�Ϊ��������
    struct ListNode* ptr = reverse_head->next;//ָ��ǰ������һ�����
    struct ListNode* tmp = NULL;//�ݴ�ָ��
    reverse_head->next = NULL;//��Ϊ��ת�������β��
    while (ptr != NULL)
    {//��ת��������
        tmp = ptr->next;
        ptr->next = reverse_head;//��ת
        reverse_head = ptr;//�ƶ�����һ�����
        ptr = tmp;
    }//��ת������ reverse_head ָ�� ���� ��ת�������ͷ
    ptr = head;//ǰ�������ͷ
    struct ListNode* Next = NULL;//�ݴ�ָ��
    while (ptr != NULL && reverse_head != NULL)
    {//��������->��ǰ����������ϲ�
        Next = ptr->next;
        ptr->next = reverse_head;//������
        ptr = Next;
        tmp = reverse_head->next;
        reverse_head->next = Next;//������
        reverse_head = tmp;
    }//�ϲ���� head ��Ϊ���ź��������ͷ
}
