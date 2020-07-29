#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,k;
    char a[17];
    gets(a);
    l=strlen(a);
    for(i=0,k=l-1;i<=k;i++,k--)
           *(a+k)=*(a+i);
    puts(a);
    return 0;
}
