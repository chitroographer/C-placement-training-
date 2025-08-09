#include<stdio.h>
void main()
{
	int ch,i,j,k,a[100],pos;
	printf("1.delete element using index number\n");
	printf("2.delete element using number mention\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("enter the numbers of elements:\n");
	scanf("%d",&j);
	printf("enter the elements of the array:\n");
	for(i=0;i<j;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position of deletion:\n");
	scanf("%d",&pos);
	for(i=pos;i<j;i++)
	{
		a[i]=a[i+1];
	}
	j--;
	printf(" new  array after insertion:\n");
	for(i=0;i<j;i++)
	{
		printf("%d",a[i]);
	}
	}
}
	
	