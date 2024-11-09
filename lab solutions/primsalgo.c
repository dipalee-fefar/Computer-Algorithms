#include<stdio.h>
void main()
{
	int n,u,v,i,j ,min, ne=1,mincost=0 , visited[10]={0} , cost[10][10];
	printf("Enter size of array: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
		
		printf("Enter the cost of edges : ");
		scanf("%d",&cost[i][j]);
		if(cost[i][j]==0)
		{
			cost[i][j]==999;
		}
		}
	}	
	visited[1]=1;
	while(ne<n){
		for(i=1,min=999;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
			
			if(cost[i][j]<min)
			{
				if(visited[i]!=0)
				{
					min=cost[i][j];
					u=i;
					v=j;
				}
			}
			if(visited[u]==0 || visited[v]==0){
				printf("Edges %d:(%d,%d) cost:%d",ne++,u,v,min);
				mincost+=min;
				visited[v]=1;
				
			}
			cost[u][v]=cost[v][u]=999;
		} 
		}
	}
	printf("Mincost is: %d",mincost);
}
