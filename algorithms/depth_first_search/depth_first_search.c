#include<stdio.h>

void DFS(int graph[100][100],int s,int visit[],int n)
{
   printf("%d ",s+1);  
   visit[s]=1;

   int i;
   for(i=0;i<n;i++)
    if(graph[s][i]&&visit[i]==0)
     DFS(graph,i,visit,n);

}

void DFSeach(int graph[100][100],int n)
{
  int visit[100]={0};
  int i;

  for(i=0;i<n;i++)
   if(visit[i]==0)
     DFS(graph,i,visit,n);   

}

int main()
{
    int n,e;
    scanf("%d",&n);
    scanf("%d",&e);

    int i;
    int u,v;
     
    int graph[100][100]={{0}}; 

    for(i=0;i<e;i++)
     {
         scanf("%d",&u);
         scanf("%d",&v);

         graph[u-1][v-1]=1;
     }
 
    
    printf("\n");
    DFSeach(graph,n);
    printf("\n");

}