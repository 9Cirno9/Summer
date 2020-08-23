#include<stdio.h>
typedef struct
{
    int x,y;
}sec;
int num[10][10];
int m,n;
int step;
sec section[1000];
void f(int,int);
int main()
{
    int i,j;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        step=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&num[i][j]);
        }
        f(0,0);
    }
}

void f(int x,int y)
{
    num[x][y]=1;
    sec p={x,y};
    section[step]=p;
    step++;
    if(x==m-1&&y==n-1)
        for(int i=0;i<step;i++)
            printf("(%d,%d)\n",section[i].x,section[i].y);
    if(x+1<m&&num[x+1][y]==0)
        f(x+1,y);
    if(x-1>=0&&num[x-1][y]==0)
        f(x-1,y);
    if(y+1<n&&num[x][y+1]==0)
        f(x,y+1);
    if(y-1>=0&&num[x][y-1]==0)
        f(x,y-1);
    
    step--;
    num[x][y]=0;
}
