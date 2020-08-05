#include <stdio.h>
int main()
{
    int cur,ans;
    scanf("%d",&ans);
    while(~scanf("%d",&cur))
    {
        if(ans>cur)
            ans=cur;
         
    }
    printf("%d\n",ans);
    return 0;
     
}
