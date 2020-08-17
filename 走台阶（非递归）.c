#include<stdio.h>
int main()
{
    int n,f[90],i;
    while(scanf("%d",&n)!=EOF)
    {
        f[1]=1,f[2]=2;
        for(i=3;i<=n;i++)
            f[i]=f[i-1]+f[i-2];
        printf("%d",f[n]);
    }
    return 0; 

}
