#include <stdio.h>

int graph[1001][1001]={0};
int df[1001]={0};
int bf[1001]={0};
int queue[1001];

void dfs(int v,int n){
    df[v]=1;
    printf("%d ",v);
    for(int i=0; i<=n; i++){
        if(graph[v][i]==1&&df[i]==0){
            dfs(i,n);
        }
    }
    return;
}

void bfs(int v,int n){
    int front=0, rear=0, pop;
    
    printf("%d ",v);
    queue[0]=v;
    rear++;
    bf[v]=1;
    
    while(front<rear){
        pop=queue[front];
        front++;
        
        for(int i=0; i<=n; i++){
            if(graph[pop][i]==1&&bf[i]==0){
                printf("%d ",i);
                queue[rear]=i;
                rear++;
                bf[i]=1;
            }
        }
    }
    return;
}

int main()
{
    int n,m,v,j,k;
    
    scanf("%d%d%d",&n,&m,&v);
    
    for(int i=0; i<m; i++){
        scanf("%d%d",&j,&k);
        graph[j][k]=1;
        graph[k][j]=1;
    }
    
    dfs(v,n);
    printf("\n");
    bfs(v,n);
    
    return 0;
}