#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	if(i%10==1)
    	sum+=1;
        sum+=f(i/10);
    }
    printf("%d",sum);
}

int f(int n)
{
    if(n==1)
       return 1;
    if(n<10&&n!=1)
       return 0;
    else
    return f(n%10)+f(n/10);
}
