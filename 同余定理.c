#include<stdio.h>
void main()
{
	int a,b,m;
	scanf("%d%d%d",&a,&b,&m);
	if(a%m==b%m)
	printf("a��b(mod m)");
	else
	printf("NO Congruence");
}
