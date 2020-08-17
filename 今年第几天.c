#include<stdio.h>
int main()
{
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int y,m,d,i,sum=0;
    while(~scanf("%d%d%d",&y,&m,&d))
    {
        for(i=0;i<m;i++)
            sum+=month[i];
        sum+=d;
        if(y%400==0||(y%100&&y%4==0))
            if(m>2)
                sum+=1;
        printf("%d\n",sum);
    }
}
