#include<stdio.h>
int main()
{
    int i,N,max,a[10000],sum[10000],item;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    if(N==1)
        max=a[0];
    sum[0]=a[0];
    for(i=1;i<N;i++)
    {
        if(sum[i-1]>0)
            sum[i]=sum[i-1]+a[i];
        else
            sum[i]=a[i];
    }
    max=sum[0];
    for(i=1;i<N;i++)
    {
        if(sum[i]>=max)
            max=sum[i];
    }
    printf("%d",max);
    return 0;
}
