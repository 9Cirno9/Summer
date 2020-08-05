#include<stdio.h>
int main()
{
	char a[12],b[12];
	while(scanf("%s %s",a,b)!=EOF)
	{
		int ans=0,i,j;
		for(i=0;a[i]!=0;++i)
			for(j=0;b[j]!=0;++j)
			    ans+=(a[i]-'0')*(b[j]-'0');
		printf("%d\n",ans);
	}
	return 0;
	
}
