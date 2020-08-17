#include<stdio.h>
int a[50],n=1;
int main()
{
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d",f(0,40));
}

int f(int i,int sum)
{
    if(sum==0)
        return 1;
    if(i==n||sum<0)
        return 0;
    return f(i+1,sum-a[i])+f(i+1,sum);
}
