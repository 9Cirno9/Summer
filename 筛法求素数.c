#include<stdio.h>
#include<stdbool.h>
bool flag[100000];
void main()
{
	int n,i,j;
	scanf("%d",&n);
	flag[1]=false;
	for(i=2;i<=n;i++)
	flag[i]=true;
	for(i=2;i<=n;i++)
	{
		if(flag[i]==true)
		{
			for(j=2;j*i<=n;j++)
			flag[j*i]=false;
		}
	}
	for(i=2;i<=n;i++)
	{
		if(flag[i])
		printf("%d ",i);
	}
}
