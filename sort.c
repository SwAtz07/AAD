#include<stdio.h>
void main()
{
	int ch,a[50],b[50],c[50],d[50],n,i,y=1,j,temp,x,low,item,mid,beg,last,f=0;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	printf("Enter the elements in unsorted array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		b[i]=a[i];
	for(i=0;i<n;i++)
		c[i]=a[i];
	for(i=0;i<n;i++)
		d[i]=a[i];
	do
	{
		printf("1.Bubble Sort\n2.Insertion Sort\n3.Selection Sort\n4.Linear Search\n5.Binary Search\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:{
					for(i=0;i<n;i++)
					{
						for(j=0;j<(n-(i+1));j++)
							if(a[j]>a[j+1])
							{
								temp=a[j];
								a[j]=a[j+1];
								a[j+1]=temp;
							}
						for(int k=0;k<n;k++)
							printf("%d\t",a[k]);
						printf("\n");
					}
					printf("\nThe sorted array is:");
					for(i=0;i<n;i++)
						printf("%d\t",a[i]);
					}
					break;
			case 2:{
					for(i=1;i<n;i++)
					{
						x=b[i];
						for(j=i-1;j>=0&&x<b[j];j--)
						{
							b[j+1]=b[j];
						}
						b[j+1]=x;
						for(int k=0;k<n;k++)
							printf("%d\t",b[k]);
						printf("\n");
					}
					printf("The sorted array is:\n");
					for (i=0;i<n;i++)
						printf("%d\t",b[i]);
				}
					break;
			case 3:{
					for(i=0;i<(n-1);i++)
					{
						low=i;
						for(j=i+1;j<n;j++)
							if(c[low]>c[j])
								low=j;
						if(low!=i)
						{
							temp=c[i];
							c[i]=c[low];
							c[low]=temp;
						}
						for(int k=0;k<n;k++)
							printf("%d\t",c[k]);
						printf("\n");
					}
					printf("The sorted array is:\n");
					for(i=0;i<n;i++)
						printf("%d\t",c[i]);
					}
					break;
			case 4:{
					printf("Enter the element to be searched:");
					scanf("%d",&item);
					for(i=0;i<n;i++)
						{
							if(a[i]==item)
							{
								f=1;
								printf("\nElement found at position %d",i+1);
								break;
							}
						}
					if(f!=1)
						printf("\nElement not found");
					}
					break;
			case 5:{
					for(i=0;i<n;i++)
						for(j=0;j<(n-(i+1));j++)
							if(a[j]>a[j+1])
							{
								temp=a[j];
								a[j]=a[j+1];
								a[j+1]=temp;
							}
					printf("Enter the element to be searched:");
					scanf("%d",&item);
					beg=0;
					last=n-1;
					mid=(beg+last)/2;
					while(beg<=last)
					{
						if(a[mid]<item)
							beg=mid+1;
						else if(a[mid]==item)
						{
							printf("\nElement found at position %d",mid+1);
							break;
						}
						else
							last=mid-1;
						mid=(beg+last)/2;
					}
					if(beg>last)
						printf("\nElement not found");
					}
					break;
			default:printf("Wrong Choice");
		}
		printf("\nDo you want to continue:");
		scanf("%d",&y);
	}while(y==1);
}
