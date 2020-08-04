#include<stdio.h>
int main()
{
    int N,a[10000],b[10000],i,j,item,ite;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d %d",&a[i],&b[i]);
    for(i=0;i<N-1;i++) 
    {
        for(j=i+1;j<N;j++)
        {
            if(b[i]>b[j])
            {
                item=b[i];
                b[i]=b[j];
                b[j]=item;
                ite=a[i];
                a[i]=a[j];
                a[j]=ite;
            }
        }
    }
    for(i=0;i<N;i++)
        printf("%d %d\n",a[i],b[i]);
    return 0;
}
