#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct node
{
	int data;
	int pos;
	struct node *next;
};
void main()
{
	struct node *first;
	struct node *next;
	struct node *current;
	struct node *prev;
	first=NULL;
	int i,n,ch,y=1,pos;
	clock_t t1,t2,t3,t4;
	double m,n1;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node *n;
		n=(struct node *)malloc(sizeof(struct node));
		printf("Enter the data:");
		scanf("%d",&n->data);
		n->pos=(i+1);
		n->next=NULL;
		if(first==NULL)
			first=n;
		else
		{
			//struct node *n;
			//n=(struct node *)malloc(sizeof(struct node));
			//printf("Enter the data:");
			//scanf("%d",&n->data);
			current=first;
			while(current->next!=NULL)
				current=current->next;
			current->next=n;
		}
	}
	current=first;
	while(current->next != NULL)
	{
		printf("\n%d",current->data);
		current = current->next;
	}
	printf("\n%d",current->data);
	printf("\n");
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
				current=first;
				prev=first;
				while(current->next!=NULL)
				{
					//prev=current;
					if(current->pos==pos)
					{
						prev->next=current->next;
						current->next=NULL;
					}
					else
					{
						prev=current;
						current=current->next;
					}						
				}
				current=first;
				for(i=0;i<n-1;i++)
				{
					current->pos=i+1;
					current=current->next;
				}
				current=first;
				while(current->next != NULL)
				{
					printf("\n%d",current->data);
					current = current->next;
				}
				printf("\n%d",current->data);
				printf("\n");
				t2=clock();
				}
				break;
			case 2:{
				t3=clock();
				printf("Enter the position:");
				scanf("%d",&pos);
				current=first;
				while(current->next!=NULL)
				{	//printf("%d",current->pos);
					if(current->pos==pos)
					{
						//printf("hey");
						if((current->data)<(current->next->data))
						{
							//printf("hello");
							printf("\nThe largest element after position %d is %d",pos,current->next->data);
							break;
						}
					}
					else
						current=current->next;
				}
				t4=clock();
				}
				break;
		}
		printf("\nDo you continue:");
		scanf("%d",&y);
	}while(y==1);				
	m=(double)(t2-t1)/CLOCKS_PER_SEC;
	n1=(double)(t4-t3)/CLOCKS_PER_SEC;
	
	printf("\nThe time for remove:%g",m);
	printf("\nThe time for next:%g",n1);
}	
