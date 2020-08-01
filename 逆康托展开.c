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
	int i,n=0,x,a[100],d[100],y[200],k=0;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		n++;
		if(getchar()=='\n')
		break;
	}
	printf("%d",n);
	printf("ÇëÊäÈëÎ»ÖÃÖµ£º");
	scanf("%d",&x);
	x=x-1;
	for(i=n-1;i>=0;i--)
	{
		d[k]=x/fact(i);
		y[k]=x%fact(i);
		x=y[k];
		k++;
	}
	for(k=0;k<n;k++)
	{
		printf("%d",a[d[k]]);
		for(i=d[k];i<n;i++)
		{
			a[i]=a[i+1];
		}
}
} 

