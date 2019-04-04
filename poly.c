#include<stdio.h>
#include<stdlib.h>
struct node
{
	int no;
	int exp;
	struct node *next;
};
void main()
{
	struct node *first;
	struct node *second;
	struct node *third;
	struct node *k;
	struct node *k1;
	struct node *k2;
	struct node *current;
	struct node *i,*j;
	first=NULL;
	second=NULL;
	third=NULL;
	int n2,a=0,x,y,x1,y1,x2,y2,n3,b=0,ch,ch1=1;
	do
	{
	printf("1.Polynomial Addition\n2.Polynomial Multiplication\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:{	a=0;
			first=NULL;
			second=NULL;
			third=NULL;
			printf("Enter the no of terms:");
			scanf("%d",&n2);
			while(a!=n2)
			{
				printf("Enter the coefficient:");
				scanf("%d",&x);
				printf("Enter the exponent:");
				scanf("%d",&y);
				struct node *n;
				n=(struct node *)malloc(sizeof(struct node));
				n->no=x;
				n->exp=y;
				if(first==NULL)
				{
					first=n;
					k=first;
				}
				else
				{
					k->next=n;
					k=k->next;
				}
		//	current=first;
		//	while(current->next!=NULL)
		//		current=current->next;
		//	current->next=n;
				a=a+1;
			}
			printf("Enter the no of terms in second:");
			scanf("%d",&n3);
			a=0;
			while(a!=n3)
			{
				printf("Enter the coefficient:");
				scanf("%d",&x1);
				printf("Enter the exponent:");
				scanf("%d",&y1);
				struct node *n1;
				n1=(struct node *)malloc(sizeof(struct node));
				n1->no=x1;
				n1->exp=y1;
				if(second==NULL)
				{
					second=n1;
					k1=second;
				}
				else
				{
					k1->next=n1;
					k1=k1->next;
				}
		//	current=first;
		//	while(current->next!=NULL)
		//		current=current->next;
		//	current->next=n;
				a=a+1;
			}
			i=first;
			j=second;
			while(i!=NULL && j!=NULL)
			{
				if(i->exp==j->exp)
				{
					x2=i->no+j->no;
					y2=i->exp;
					struct node *r;
					r=(struct node *)malloc(sizeof(struct node));
					r->no=x2;
					r->exp=y2;
					if(third==NULL)
					{
						third=r;
						k2=third;
					}
					else
					{
						k2->next=r;
						k2=k2->next;
					}
					i=i->next;
					j=j->next;
				}	
				else if(i->exp<j->exp)
				{
					x2=j->no;
					y2=j->exp;
					struct node *r;
					r=(struct node *)malloc(sizeof(struct node));
					r->no=x2;
					r->exp=y2;
					if(third==NULL)
					{
						third=r;
						k2=third;
					}
					else
					{
						k2->next=r;
						k2=k2->next;
					}
					j=j->next;
				}
				else
				{
					x2=i->no;
					y2=i->exp;
					struct node *r;
					r=(struct node *)malloc(sizeof(struct node));
					r->no=x2;
					r->exp=y2;
					if(third==NULL)
					{
						third=r;
						k2=third;
					}
					else
					{
						k2->next=r;
						k2=k2->next;
					}
					i=i->next;
				}
			}
			while(i !=NULL)	
			{
				x2=i->no;
				y2=i->exp;
				struct node *r;
				r=(struct node *)malloc(sizeof(struct node));
				r->no=x2;
				r->exp=y2;
				if(third==NULL)
				{
					third=r;
					k2=third;
				}
				else
				{
					k2->next=r;
					k2=k2->next;
				}
				i=i->next;
			}

			while(j !=NULL)	
			{
				x2=j->no;
				y2=j->exp;
				struct node *r;
				r=(struct node *)malloc(sizeof(struct node));
				r->no=x2;
				r->exp=y2;
				if(third==NULL)
				{
					third=r;
					k2=third;
				}
				else
				{
					k2->next=r;
					k2=k2->next;
				}
				j=j->next;
			}
			printf("\n");
			current=third;
			while(current->next != NULL)
			{
				printf("%dx",current->no);
				printf("^");
				printf("%d+",current->exp);
				current = current->next;
			}
			printf("%dx",current->no);
			printf("^");
			printf("%d\n",current->exp);							
			}
			break;
		case 2:	{	a=0;
				first=NULL;
				second=NULL;
				third=NULL;
				printf("Enter the no of terms:");
				scanf("%d",&n2);
				while(a!=n2)
				{
					printf("Enter the coefficient:");
					scanf("%d",&x);
					printf("Enter the exponent:");
					scanf("%d",&y);
					struct node *n;
					n=(struct node *)malloc(sizeof(struct node));
					n->no=x;
					n->exp=y;
					if(first==NULL)
					{
						first=n;
						k=first;
					}
					else
					{
						k->next=n;
						k=k->next;
					}
		//	current=first;
		//	while(current->next!=NULL)
		//		current=current->next;
		//	current->next=n;
					a=a+1;
				}
				printf("Enter the no of terms in second:");
				scanf("%d",&n3);
				a=0;
				while(a!=n3)
				{
					printf("Enter the coefficient:");
					scanf("%d",&x1);
					printf("Enter the exponent:");
					scanf("%d",&y1);
					struct node *n1;
					n1=(struct node *)malloc(sizeof(struct node));
					n1->no=x1;
					n1->exp=y1;
					if(second==NULL)
					{
						second=n1;
						k1=second;
					}
					else
					{
						k1->next=n1;
						k1=k1->next;
					}
		//	current=first;
		//	while(current->next!=NULL)
		//		current=current->next;
		//	current->next=n;
					a=a+1;
				}
				i=first;
				j=second;	
				for(i=first;i!=NULL;i=i->next)
					for(j=second;j!=NULL;j=j->next)
					{
						x2=i->no*j->no;
						y2=i->exp+j->exp;
						struct node *r;
						r=(struct node *)malloc(sizeof(struct node));
						r->no=x2;
						r->exp=y2;
						if(third==NULL)
						{
							third=r;
							k2=third;
						}
						else
						{
							k2->next=r;
							k2=k2->next;
						}
					}
				for(i=third;i->next!=NULL;i=i->next)
					for(j=i;j->next!=NULL;j=j->next)
					{
						if(i->exp==j->next->exp)
						{
							i->no=(i->no)+(j->next->no);
							j->next=j->next->next;
						}
					}
				printf("\n");
				current=third;
				while(current->next != NULL)
				{
					printf("%dx",current->no);
					printf("^");
					printf("%d+",current->exp);
					current=current->next;
				}
				printf("%dx",current->no);
				printf("^");
				printf("%d\n",current->exp);
							
			}
			break;
	}
	printf("Do you want to continue(yes=1/no=0):");
	scanf("%d",&ch1);
	}while(ch1==1);
}

