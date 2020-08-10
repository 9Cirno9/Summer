#include<stdio.h>
#include<stdlib.h>
typedef struct Listlink
{
	int data;
	struct Listlink *pre; 
	struct Listlink *next;
 }List;

List *creatlist(int n)
{
	List *head,*tail,*p;
	int i,a;
	head=(List*)malloc(sizeof(List));
	head->next=NULL;
	head->pre=NULL;
	tail=head;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		p=(List*)malloc(sizeof(List));
		p->data=a;
		p->pre=tail;
		tail->next=p;
		tail=p;
	}
	return head;
}
void main()
{
	int lon;
	List *head,*l,*p;
	int i,k=1;
	scanf("%d",&lon);
	head=creatlist(lon);
	p=head->next;
	l=head->next;
	for(i=1;i<lon;i++)
	{
	p=p->next;
}
	for(i=0;i<lon/2;i++)
	{
		if(l->data!=p->data)
		{
			k=0;
			break;
		}
		l=l->next;
		p=p->pre;
	}
	if(k)
	printf("true");
	else
	printf("false");
}
