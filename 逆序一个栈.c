#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
        scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    fun(p,n);
    return 0;
}

fun(int *p,int n)
{
    if(n>0)
    {
        printf("%d ",p[n-1]);
        fun(p,n-1);
    }
}
