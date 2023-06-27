#include<stdio.h>
void dfs(int);
int a[10][10], vis[10],n,Exp[10],J=0;
void main()
{
    int m,u,v;
    printf("enter the no. of vertices\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[i][j]=0;
        }
    }
    printf("Enter the no of edges");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        printf("\nEnter an edge");
        scanf("%d%d",&u,&v);
        a[u][v]=1;
    }

    for(int i=1;i<=n;i++)
    {
        vis[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
            dfs(i);
    }
    printf("Topological Order\t");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\t",Exp[i]);
    }
}

void dfs(int v)
{
    int i;
    vis[v]=1;
    for(i=1;i<=n;i++)
    {
        if(a[v][i]==1 && vis[i]==0)
            dfs(i);
    }
    Exp[J++]=v;
}
