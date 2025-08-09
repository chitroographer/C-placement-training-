#include<stdio.h>
void main()
{
	int a[100],i,j,k,sum=0,n;
	printf("enter the number of elements in the 1st array:\n");
	scanf("%d",&n);
	printf("enter the elements ofnthe array:\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					int t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}
		}
		for(j=0;j<n;j++)
		{
			printf("sorted arary:%d\n",a[j]);
		}
		for(j=0;j<n;j=j+2)
		{
			sum=sum+a[j];
		}
		printf("sum is:%d\n",sum);
}