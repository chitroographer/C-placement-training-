/*Stack using array*/
#include<stdio.h>
#include<stdlib.h>
void push(int data);
int pop();
void display();
int stack[100],top,MAXSIZE,data;
void push(int data)
{
	if(top==MAXSIZE-1)
	{
		printf("\nStack is full");
	}
	else
	{
		top++;
		stack[top]=data;
	}
}
int pop()
{
	int data;
	if(top==-1)
	{
		printf("\nStack is empty");
		return -9999;
	}
	else
	{
		data=stack[top];
		top--;
		return data;
	}
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d -> ",stack[i]);
	}
}
void main()
{
	int ch;
	top=-1;
	MAXSIZE=5;
	while(1)
	{
	printf("\n1.PUSH");
	printf("\n2.POP");
	printf("\n3.Display");
	printf("\n4.Exit");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nEnter the element to be inserted:");
				scanf("%d",&data);
				push(data);
				break;
		case 2: data=pop();
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