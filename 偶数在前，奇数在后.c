#include<stdio.h>
void main()
{
    int a[10000];
    int i=0,n;
    while(~scanf("%d",&n)){
        if(n%2){
            a[i]=n;
            i++;
        }
        else
            printf("%d ",n);
    }
    while(--i>=0)
    {
    	
        printf("%d ",a[i]);
}
}

