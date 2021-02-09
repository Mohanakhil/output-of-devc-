#include<stdio.h>
int main()
{
	int n,a[100],i,pos;
	printf("enter no of elements in array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter no in a[%d]= ",i);
		scanf("%d",&a[i]);
	} printf("\nenter the position of the element to  be deleted\n");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}n=n-1;printf("the array after deleting %d position is\n",pos);
	for(i=0;i<n;i++)
	{printf("a[%d]= %d \n",i,a[i]);
	}
	return 0;
}
