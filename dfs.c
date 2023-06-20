#include<stdio.h>
void dfs(int);
void connect();
int a[10][10], vis[10],n;
void main()
{
    int i,j;
    printf("enter the vertices\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=1;i<=n;i++)
    {
        vis[i]=0;
    }
    printf("dfs traversal\n");
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
            dfs(i);
    }
    connect();
}

void dfs(int v)
{
    int i;
    vis[v]=1;
    printf("%d\t",v);
    for(i=1;i<=n;i++)
    {
        if(a[v][i]==1 && vis[i]==0)
            dfs(i);
    }
}

void connect()
{
    for (int i=1;i<=n;i++)
    {
        if(vis[i]==0)                                                                                                                                                                                                                                     =0)
        {
            printf("\nNot connected");
            return;
        }

    }
    printf("\nConnected");
}
