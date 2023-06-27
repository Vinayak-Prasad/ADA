#include<stdio.h>
void bfs(int);
void connect();
int a[10][10], vis[10],n;
int Q[10],f=0,r=0;
void main()
{
    int i,j,s;
    printf("enter the no. of vertices\n");
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
        if(vis[i]==0){
            bfs(i);
        }
    }

}

void bfs(int v)
{
    int u;
    vis[v]=1;
    Q[r]=v;
    while(f<=r)
    {
        u=Q[f];
        printf("%d",u);
        for(int i=1;i<=n;i++)
        {
            if(a[u][i]==1 && vis[i]==0)
            {
                r=r+1;
                Q[r]=i;
                vis[i]=1;
            }
        }
        f=f+1;
    }
}
