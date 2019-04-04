#include<stdio.h>
int a[50][50],node[50],c=0,n,seg=0;
void dfs(int i)
{
	c++;
	node[i]=1;
	for(int j=0;j<n;j++)
	{
		if(node[j]!=1&&a[i][j]!=0)
			dfs(j);
	}
}
void main()
{
	int i,j;
	for(i=0;i<n;i++)
		node[i]=0;
	printf("Enter the no. of vertices:");
	scanf("%d",&n);
	printf("Enter the adjacency matrix:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	while(c<n)
	{
		for(i=0;i<n;i++)
			if(node[i]==0)
			{
				seg++;
				dfs(i);
			}
	}
	printf("\n");
	printf("Connected components:%d\n",seg);
}
	
	
