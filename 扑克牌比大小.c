#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  char *a;
  char *b;
  int i,j,k;
  int cn1 = 0;
  int cn2 = 0;
  int alen,blen;
  int flag1 = 0;
  int flag2 = 0;
  while(gets(s))
  {
    a = strtok(s, "-");
    b = strtok(NULL, "-");
    alen = strlen(a);
    blen = strlen(b);
    for(i = 0; i < alen; i++)
    {
        if(a[i] == ' ')
            cn1++;
    }
    for(i = 0; i < blen; i++)
    {
        if(b[i] == ' ')
            cn2++;
    }
    if(cn1 == 1 && alen == 11)
        flag1 = 1;
    if(cn1 == 3)
        flag1 = 2;
    if(cn2 == 1 && blen == 11)
        flag2 = 1;
    if(cn2 == 3)
        flag2 = 2;
      
    if(flag1 == 1||flag2 == 1)
    {
       if(flag1==1)
           printf("%s\n",a);
       else
           printf("%s\n",b);
    }
    else if(flag1==2||flag2==2)
    {
    	if(flag1==2&&flag2!=2)
    	printf("%s\n",a);
    	else if(flag1!=2&&flag2==2)
    	printf("%s\n",b);
    	else
    	{
    		j=a[0]-'0',k=b[0]-'0';
    		if(j==1)
    		j=j+9;
    		if(k==1)
    		k=k+9;
    		if(j>k)
             printf("%s\n",a);
        else
             printf("%s\n",b);
		}
	}
    else if(cn1!=cn2||a==b)
        printf("ERROR");
    else
    {
        j=a[0]-'0',k=b[0]-'0';
    		if(j==1)
    		j=j+9;
    		if(k==1)
    		k=k+9;
    		if(j>k)
             printf("%s\n",a);
        else
             printf("%s\n",b);
    }
  }
    return 0;
}
