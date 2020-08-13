#include<stdio.h>
 
struct Node
{
    int pap;
    int mom;
}relation[30];
 
int find(int from, int to, int level)
{
    if (from == to) return level;
    if (relation[from].pap != -1)
    {
        int re = find(relation[from].pap, to, level + 1);
        if (re != -1) return re;
    }
    if (relation[from].mom != -1)
    {
        int re = find(relation[from].mom, to, level + 1);
        if (re != -1) return re;
    }
    return -1;
}
 
int main()
{
    int n, m;
    while (scanf("%d%d", &n, &m) != EOF)
    {
        int i;
        for (i = 0; i <= 26; i++)
        {
            relation[i].pap = -1;
            relation[i].mom = -1;
        }
        for (i = 0; i < n; i++)
        {
            char s[5];
            scanf("%s", s);
            if (s[1] != '-') relation[s[0] - 'A'].pap = s[1] - 'A';
            if (s[2] != '-') relation[s[0] - 'A'].mom = s[2] - 'A';
             
        }
        for (i = 0; i < m; i++)
        {
            char s[5];
            scanf("%s", s);
            int node = s[1] - 'A';
            int target = s[0] - 'A';
            int ans = find(node, target, 0);
            int ans2 = find(target, node, 0);
            if (ans == 1) printf("parent\n");
            else if (ans > 1)
            {
                int j;
                for (j = 0; j < ans - 2; j++)
                {
                    printf("great-");
                }
                printf("grandparent\n");
            }
            else if (ans2 != -1)
            {
                if (ans2 == 1) printf("child\n");
                else if (ans2 > 1)
                {
                    int j;
                    for (j = 0; j < ans2 - 2; j++)
                    {
                        printf("great-");
                    }
                    printf("grandchild\n");
                }
            }
            else
            {
                printf("-\n");
            }
        }
    }
    return 0;
}
