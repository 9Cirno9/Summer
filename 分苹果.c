#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d%d",&m,&n)!=EOF)
    printf("%d",funx(m,n));
    return 0;
}

int funx(int m,int n)
{
    if(m==0||n==1)
        return 1;
    else if(n>m)
        return funx(m,m);
     else
         return funx(m-n,n)+funx(m,n-1);
}
