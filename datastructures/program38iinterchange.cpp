#include<stdio.h>
main()
{
	int n,i,temp,a[20];
	printf("enter no of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
	printf("enter a[%d]= ",i);
	scanf("%d",&a[i]);
} i=0;temp=a[i+1];
a[i+1]=a[n-2];
a[n-2]=temp;printf("array is\n");
while(i<n)
{
	printf(" %d ",a[i]);i=i+1;
}
}
