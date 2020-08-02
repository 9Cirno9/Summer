#include<stdio.h>
int fact(int num)
{
	if(num<=1)
	return 1;
	else
	return fact(num-1)*num;
 }

void main()
{
	char a[100],s;
	int j=0,k=0,i=0,count=0,x[100],sum=0;
	while(scanf("%c",&s))
	{
		if(s=='\n')
		break;
		else
		{
		a[i]=s;
		count++;
		i++;
	}		
	}
	printf("%d\n",count);
	
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(a[i]>a[j])
			k++;
		}
		x[i]=k;
		k=0;
	}
	j=0;
	for(i=count-1;i>=0;i--)
	{
		if(j==0)
		printf("sum=%d*%d!",x[j],i);
		sum+=(x[j])*fact(i);
		j++;
		if(i==0)
		break;
		printf("+%d*%d!",x[j],i);
	}
	printf("\nsum=%d",sum+1);
	
}
