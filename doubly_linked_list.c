#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<stdlib.h>
void beginning(int data);
void end(int data1);
void position(int data2,int pos);
void display();
struct node{
	int info;
	struct node *prev;
	struct node *next;
};
struct node *list,*p,*q,*r;
int flag,pos,i;
void beginning(int data){
	p=(struct node *)malloc(sizeof(struct node));
	p->info=data;
	p->next=NULL;
	p->prev=NULL;
	if(list==NULL)
	{
		list=p;
		}
	else
	{
		q=list;
		q->prev=p;
		p->next=q;
		list=p;
	}
}
void end(int data1){
	p=(struct node *)malloc(sizeof(struct node));
	p->info=data1;
	p->prev=NULL;
	p->next=NULL;
		q=list;
		while(q->next !=NULL)
		{
			q=q->next;
		}
		p->prev=q;
		q->next=p;
}

void position(int data2,int pos){
	p = (struct node *)malloc(sizeof(struct node));
	p->info=data2;
	p->next=NULL;
	p->prev=NULL;
		q=list;
		for(i=1;i<pos-1;i++)
		{
			q=q->next;
		}
		p->prev=q->next->prev;
		p->next=q->next;
		q->next->prev=q->next=p;
}
void display()
{
	struct node *q;
	q=list;
	while(q->next!=NULL)
	{
		printf("%d ->",q->info);
		q=q->next;
	}
	printf("%d",q->info);
}
void main()
{
	int ch,pos2,data4;
	do{
		printf("\nInsertion\n");
	printf("1.At the beginning \n");
	printf("2.At the end \n");
	printf("3.At a given position \n");
	printf("4.Display \n");
	printf("5. Exit\n");
	printf("Enter the choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the data:\n");
			scanf("%d",&data4);
			beginning(data4);
			break;
		case 2:
			printf("Enter the data:\n");
			scanf("%d",&data4);
			end(data4);
			break;
		case 3:
			printf("Enter the data:\n");
			scanf("%d",&data4);
			printf("enter the position:");
			scanf("%d",&pos2);
			position(data4,pos2);
			break;
		case 4:
			display();
			break;
		case 5:
			exit(0);
		default:
				printf("Wrong input");
    }
	}while(1);
}
		