#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int val;
    struct node *next;
}NODE;
int compare(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
int main()
{
    int n,i,s[10000];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&s[i]);
        qsort(s,n,sizeof(int),compare);
        NODE *head,*tail,*p;
        head=(NODE *)malloc(sizeof(NODE));;
        tail=head;
        for(i=0;i<n;i++)
        {
            p=(NODE *)malloc(sizeof(NODE));
            p->next=NULL;
            p->val=s[i];
            tail->next=p;
            tail=p;
        }
	    NODE *q;
        q=head->next;
        while(q->next!=NULL)
        {
            printf("%d",q->val);
            q=q->next;
            if(q->next==NULL)
            printf("%d",q->val);
        }
        }
    return 0;
}
