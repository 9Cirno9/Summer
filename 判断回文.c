#include<stdio.h>
#include<stdlib.h>
typedef struct Listlink
{
	int data;
	struct Listlink *next;
 }List;

List *creatlist(int n)
{
	List *head,*tail,*p;
	int i,a;
	head=(List*)malloc(sizeof(List));
	head->next=NULL;
	tail=head;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		p=(List*)malloc(sizeof(List));
		p->data=a;
		p->next=NULL;
		if(head->next==NULL)
		head->next=p;
		else
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
	l=head->next;
	p=head->next;
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
		p--;
		l++;
		printf("%d\n",l->data);
		printf("%d\n",p->data);
	}
	if(k)
	printf("Yes");
	else
	printf("No");
}
