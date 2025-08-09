#include<stdio.h>
void main()
{
	int a[100],i,j,k,pos;
	printf("enter the numbers of elements:");
	scanf("%d",&j);
	printf("enter the elements of the array:");
	for(i=0;i<j;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to be inserted:");
	scanf("%d",&k);
	printf("enter the position:");
	scanf("%d",&pos);
	for(i=j-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=k;
	j++;
	printf("enter the new  array after insertion:");
	for(i=0;i<j;i++)
	{
		printf("%d",a[i]);
	}
}