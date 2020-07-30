#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int Jojo(int b[100][100],int o,int l,int m);
void main()
{
    int i,j,n,a[100][100];
    scanf("%d",&n);
    int len,x=1,item;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d ",a[i][j]);
		if(j==3)
		printf("\n");
		} 
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				item=Jojo(a,n,i,j);
				if(x==1)
				len=item;
				if(item<=len)
				len=item;
				x=0;
			}
		}
	}
	if(x)
	printf("-1");
	else
	printf("%d",len);

}

int Jojo(int b[100][100],int o,int l,int m)
{
	int i,j,lon=0;
	for(i=0;i<o;i++)
	{
		for(j=0;j<o;j++)
		{
			if(b[i][j]==1)
			lon+=abs(l-i)+abs(m-j);
		}
	}
	return lon;
}
