#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bogosort(int *data,int begin,int end);
void shuffle(int *data,int size);
int in_order(int *data,int size);
void main()
{
	int array[5],i;
	for(i=0;i<5;i++)
	scanf("%d",&array[i]);
	bogosort(array,0,4);
	for(i=0;i<5;i++)
	printf("%d",array[i]);
}

void bogosort(int *data,int begin,int end)
{
	while(!in_order(data,end-begin))
	shuffle(data,end-begin);
}

void shuffle(int *data,int size)
{
	int i,temp;
	srand((unsigned)time(NULL));
	for(i=0;i<=size;i++)
	{
		int index=rand()%(size+1);
		temp=data[i];
		data[i]=data[index];
		data[index]=temp;
	}
}

int in_order(int *data,int size)
{
	int i;
	for(i=0;i<size;i++)
	if(data[i]>data[i+1])
	return 0;
	return 1;
}
