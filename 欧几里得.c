#include<stdio.h>
void main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b))
	printf("%d",gcd(a,b));
 }
 
int gcd(int x,int y)
{
	if(y==0)
	return x;
	else
	gcd(y,x%y);
}
