#include<stdio.h>
int main()
{
    int N,K,s[10000],r[10000];
    int i,sum=0;
    scanf("%d%d",&N,&K);
    for(i=0;i<N;i++)
    { 
        scanf("%d",&s[i]);
        r[i]=0;
}
    for(i=0;i<N;i++)
    {
        r[s[i]%K]++;
    }
    if(r[0])
        sum++;
    if(K%2==1)
    {
    for(i=1;i<=(K-1)/2;i++)
    {
    	
        if(r[i]>r[K-i])
            sum+=r[i];
        else
        sum+=r[K-i];
    }
}
    else
    {
    for(i=1;i<=K/2;i++)
    {
        if(i==K/2&&r[i/2]>0)
        {
        sum++;
        break;
        }
    	if(r[i]>r[K-i])
            sum+=r[i];
        else
        sum+=r[K-i];
	}
}
    printf("%d",sum);
return 0;
}
