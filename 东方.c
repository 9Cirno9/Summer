#include<stdio.h>
int main()
{
    int n,a[100000],i,need,j,b[10000],k=0,item;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&need);
    for(i=0;i<n;i++)
    {
        if(a[i]>=need)
            continue;
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==need)
            {
                if(a[i]<a[j])
                b[k]=a[i];
                else
                    b[k]=a[j];
                k++;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(b[j]<b[i])
            {
                item=b[j];
                b[j]=b[i];
                b[i]=item;
            }
        }
    }
    for(i=0;i<k;i++)
        printf("%d %d\n",b[i],7-b[i]);
    return 0;
}
