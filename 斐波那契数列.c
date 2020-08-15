#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
        return 0;
}

int f(int n)
{
    int a[48],i;
    for(i=0;i<n;i++)
        a[n]=-1;
    if(n<=2)
        return 1;
    else
    {
        a[n]=f(n-2)+f(n-1);
        return a[n];
    }
}
