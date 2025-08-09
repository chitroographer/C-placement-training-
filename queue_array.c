/*Queue using array*/
#include<stdio.h>
#include<stdlib.h>
void insert(int data);
int delete();
void display();
int queue[100],rear,front,MAXSIZE,data;
void insert(int data)
{
	if(rear==MAXSIZE-1)
	{
		printf("\nQueue is full");
	}
	else
	{
		rear++;
		queue[rear]=data;
		if(front==-1)
			front=0;
	}
}
int delete()
{
	int data;
	if(front==-1)
	{
		printf("\nQueue is empty");
		return -9999;
	}
	else
	{
		data=queue[front];
		if(rear==front)
			rear=front=-1;
		else
			front++;
		return data;
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d -> ",queue[i]);
	}
}
void main()
{
	int ch;
	front=rear=-1;
	MAXSIZE=5;
	while(1)
	{
	printf("\n1.Insert");
	printf("\n2.Delete");
	printf("\n3.Display");
	printf("\n4.Exit");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nEnter the element to be inserted:");
				scanf("%d",&data);
				insert(data);
				break;
		case 2: data=delete();
				if(data!=-9999)	
					printf("\n Element is deleted:%d",data);
				break;
		case 3:
				display();
				break;
		case 4:
				exit(0);
		default:
				printf("\nWrong choice");
	}
	}
}