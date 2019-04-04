#include<stdio.h>
int a[50][50];
void allpairshortestpath(int n)
{
	int min,c;
	for(int k=0;k<n;k++)
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				min=a[i][j];
				c=a[i][k]+a[k][j];
				if(c<min)
					min=c;
				a[i][j]=min;
			}
	printf("\nThe matrix is:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}
void main()
{
	int n,i,j;
	printf("Enter the no of vertices:");
	scanf("%d",&n);
	printf("Enter the adjacency matrix:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	allpairshortestpath(n);
}
