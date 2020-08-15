#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,a,num,i;
    while(~scanf("%d%d",&n,&a)){
        for (i=0;i<n;i++){
            scanf("%d",&num);
            if (num <= a)
                a+=num;
            else
                a+=gcd(num,a);
        }
        printf("%d\n",a);
    }
    return 0;
}
int gcd(int p0,int qi)
{
    if(qi==0)
        return p0;
    else
        return gcd(qi,p0%qi);
}
