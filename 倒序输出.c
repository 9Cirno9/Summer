#include<stdio.h>
int main()
{
    int n,m=0;
    scanf("%d",&n);
   while(n)
   {
       m=m*10+n%10;
       n=n/10;
   }
    printf("%d",m);
}

