#include<stdio.h>
#include<time.h>
void main()
{
	int a[50],ch,pos,n,i,y=1;
	clock_t t1,t2,t3,t4;
	double m,n1;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	do
	{
		printf("\n1.Remove\n2.Next\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:{
				t1=clock();
				printf("Enter the position:");
				scanf("%d",&pos);
				for(i=pos-1;i<n-1;i++)
					a[i]=a[i+1];
				printf("\nThe array is:\n");
				for(i=0;i<n-1;i++)
					printf("%d\t",a[i]);
				t2=clock();
				}
				break;
			case 2:{
				t3=clock();
				printf("Enter the position:");
				scanf("%d",&pos);
				for(i=pos-1;i<n;i++)
					if(a[pos-1]<a[i])
					{
						printf("\nThe largest element after position %d is %d",pos,a[i]);
						break;
					}
				t4=clock();
				}
				break;
			default:printf("wrong choice");
		}
		printf("\nDo you want to continue:");
		scanf("%d",&y);
	}while(y==1);
	m=(double)(t2-t1)/CLOCKS_PER_SEC;
	n1=(double)(t4-t3)/CLOCKS_PER_SEC;
	printf("\nTime taken for Remove:%g",m);
	printf("\nTime taken for Next:%g",n1);
}
				 
				
