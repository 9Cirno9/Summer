#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    int len,i,j;
    gets(a);
    len=strlen(a);
    for(i=len-1;i>=0;i--)
    {
        if(a[i]==' ')
        {
            j=i+1;
            while(a[j]!=' ')
            {
                if(j==len)
                    break;
                printf("%c",a[j]);
                j++;
            }
            printf(" ");
        }
    }
    i=0;
    while(a[i]!=' ')
    {
        printf("%c",a[i]);
        i++;
    }
    return 0;
}
