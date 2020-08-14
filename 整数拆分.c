#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
        printf("%d",f(n));
    return 0;
}
int f(int n)
{
	int a[1000],i;
	for(i=0;i<=n;i++)
    a[i]=-1;
    if(n<=1)
        return 1;
    if(a[n]!=-1)
    return a[n];
    else
    {
    if(n%2)
        a[n]=f(n-1);
    else
        a[n]=f(n-1)+f(n/2);
    return a[n];
}
}
