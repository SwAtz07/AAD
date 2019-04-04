#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];   
    int i = (low - 1);  
  
    for (int j = low; j <= high- 1; j++) 
    {  
        if (arr[j] <= pivot) 
        { 
            i++;    
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
  
        
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
/*void quick_sort(int a[5000],int l,int u)
{
	int j;
	if(l<u)
	{
		j=partition(a,l,u);
		quick_sort(a,l,j-1);
		quick_sort(a,j+1,u);
	}
}
int partition(int a[5000],int l,int u)
{
	int v,i,j,temp;
	v=a[l];
	i=l;
	j=u+1;
	do
	{
		do
		{
			i++;
		}while(a[i]<v&&i<=u);
		do
		{
			j--;
		}while(a[j]>v);
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);
	a[l]=a[j];
	a[j]=v;
	return(j);
}*/

void main()
{
	int ch,a[5000],n,i,j,temp,low,x,y=1;
	clock_t t1,t2,t3,t4,t5,t6,t7,t8;
	double q,w,e,r;
	do
	{
		printf("\n1.Bubble\n2.Insertion\n3.Selection\n4.Quick\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:{
					printf("Enter the no of elements:");
					scanf("%d",&n);
					printf("Enter the elements:");
					//for(i=n;i>=0;i--)
					//	a[i]=i;
					for(i=0;i<n;i++)
						a[i] = rand()%1000;
					t1=clock();
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
					printf("\nThe sorted array is:\n");
					for(i=0;i<n;i++)
						printf("%d\t",a[i]);
					t2=clock();
				}
				break;
			case 2:{
					printf("Enter the no of elements:");
					scanf("%d",&n);
					printf("Enter the elements:");
					//for(i=n;i>=0;i--)
					//	a[i]=i;
					for(i=0;i<n;i++)
						a[i] = rand()%1000;//scanf("%d",&a[i]);
					t3=clock();
					for(i=1;i<n;i++)
					{
						x=a[i];
						for(j=i-1;j>=0&&x<a[j];j--)
						{
							a[j+1]=a[j];
						}
						a[j+1]=x;
						for(int k=0;k<n;k++)
							printf("%d\t",a[k]);
						printf("\n");
					}
					/*for(i=1;i<n;i++)
					{
						x=a[i];
						for(j=i-1;j>=0&&x<a[j];j--)
							a[j+1]=a[j];
						a[j+1]=a[x];
						for(int k=0;k<n;k++)
							printf("%d\t",a[k]);
						printf("\n");
					}*/
					printf("\nThe sorted array is:\n");
					for(i=0;i<n;i++)
						printf("%d\t",a[i]);
					t4=clock();
				}
				break;
			case 3:{
					printf("Enter the no of elements:");
					scanf("%d",&n);
					printf("Enter the elements:");
					t5=clock();
					//for(i=n;i>=0;i--)
					//	a[i]=i;
					for(i=0;i<n;i++)
						a[i] = rand()%1000;//scanf("%d",&a[i]);
					for(i=0;i<(n-1);i++)
					{
						low=i;
						for(j=i+1;j<n;j++)
							if(a[low]>a[j])
								low=j;
						if(low!=i)
						{
							temp=a[i];
							a[i]=a[low];
							a[low]=temp;
						}
						for(int k=0;k<n;k++)
							printf("%d\t",a[k]);
						printf("\n");
					}
					printf("The sorted array is:\n");
					for(i=0;i<n;i++)
						printf("%d\t",a[i]);
					t6=clock();
				}
				break;
			case 4:{
				 	printf("Enter no of elements:\n");
       					scanf("%d",&n);
       					printf("Enter the elements:\n");
					//for(i=n;i>=0;i--)
					//	a[i]=i;
       					for(i=0;i<=n-1;i++)
       						a[i] = rand()%1000;//scanf("%d",&a[i]);
					t7=clock();
       					quickSort(a,0,n-1);
       					printf("sorted array is\n");
       					for(i=0;i<=n-1;i++)
      						 printf("%d\n",a[i]);
					sleep(0.02);
					t8=clock();
				}
				break;
			default:printf("\nWrong Choice");
		}
		printf("\nDo you want to continue:");
		scanf("%d",&y);
	}while(y==1);
	q=(double)(t2-t1)/CLOCKS_PER_SEC;
	w=(double)(t4-t3)/CLOCKS_PER_SEC;
	e=(double)(t6-t5)/CLOCKS_PER_SEC;
	r=(double)(t8-t7)/CLOCKS_PER_SEC;
	printf("\nTime taken for Bubble:%g",q);
	printf("\nTime taken for insertion:%g",w);
	printf("\nTime taken for selection:%g",e);
	printf("\nTime taken for quick:%g",r);
}
					
					
	
