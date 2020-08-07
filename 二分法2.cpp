#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    return (*(int*)a-*(int *)b);
}
int main(void)
{
    int num,sum;
    scanf("%d",&num);
    int i,j,count=0,*cup=(int*)malloc(sizeof(int)*num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&cup[i]);
    }
    scanf("%d",&sum);
        qsort(cup,num,sizeof(int),compare);
    for(int l=0,r=num-1,nn;l<r;)
    {        
        nn = cup[l] + cup[r];
        if(nn == sum)
        {
            count++;
            printf("%d %d\n",cup[l],cup[r]);
            if(cup[l]!=cup[l+1])
                r--;
            if(cup[r]!=cup[r-1])
                l++;            
        }   
        else if(nn < sum)
        {
            l++;
        }else
            r--;
    }
    if(count == 0)
        printf("NO\n");
    
}
