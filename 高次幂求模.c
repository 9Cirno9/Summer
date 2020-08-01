#include<stdio.h>
void main()
{
	long a,b,c,item=1.0;
	scanf("%lu%lu%lu",&a,&b,&c);
	a=a%c;
	while(b>0)
	{
		if(b%2==1)
		item=(item*a)%c;
		b=b/2;
		a=(a*a)%c;
	}
	printf("/nresult is : %lu",item);
 }
