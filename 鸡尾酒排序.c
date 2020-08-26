#include<stdio.h>
void swap(int *a,int i,int j)
{
	int tmp=a[i];
	a[i]=a[j];
	a[j]=tmp;
}

void main()
{
	int a[1000],len,i;
	scanf("%d",&len);
	for(i=0;i<len;i++)
	scanf("%d",&a[i]);
	int left=0,right=len-1;
	while(left<right)
	{
		for(i=left;i<right;i++)
		{
			if(a[i]>a[i+1])
			swap(a,i,i+1);
		}
		right--;
		for(i=right;i>left;i--)
		{
			if(a[i]<a[i-1])
			swap(a,i,i-1);
		}
		left++;
	}
	for(i=0;i<len;i++)
	printf("%d ",a[i]);
	
 } 
