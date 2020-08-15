#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a*b/gcd(a,b));
}

int gcd(int n,int m)
{
    if(m==0)
        return n;
    else
        return gcd(m,n%m);
}
