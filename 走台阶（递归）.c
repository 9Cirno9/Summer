#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",fun(n));
}

int fun(int n)
{
    if(n<=1)
        return 1;
    return fun(n-1)+fun(n-2);
}
