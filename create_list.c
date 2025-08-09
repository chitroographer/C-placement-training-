#include<stdio.h>
#include<malloc.h>
void create_list(int data);
void display();
struct node{
	int info;
	struct node *next;// stores the address of the next node
	};
struct node *list;
void create_list(int data)
{
	struct node *p,*q;
	p=(struct node *)malloc(sizeof(struct node));
	p->info=data;
	p->next=NULL;
	if(list==NULL)//list is empty
	{
		list=p;
	}
	else
	{
		q=list;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
	}
}
void main()
{
	int i,n,data;
	list=NULL;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter value:");
		scanf("%d",&data);
		create_list(data);
	}
	display();
	
}
void display()
{
	struct node *q;
	q=list;
	while(q!=NULL)
	{
		printf("%d ->",q->info);
		q=q->next;
	}
}