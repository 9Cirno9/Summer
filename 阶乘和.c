#include<stdio.h>
int main()
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		int sum=0,sum2=0;
		if(n%2)
		{
			for(i=1;i<=n;i+=2)
			sum+=f(i);
			for(i=2;i<=n-1;i+=2)
			sum2+=f(i);
			printf("%d %d",sum,sum2);
		}
		else
		{
			for(i=1;i<=n-1;i+=2)
			sum+=f(i);
			for(i=2;i<=n;i+=2)
			sum2+=f(i);
			printf("%d %d",sum,sum2);
		}
}
return 0;
}

int f(int n)
{
	if(n<=1)
	return 1;
	return n*f(n-1);
}
