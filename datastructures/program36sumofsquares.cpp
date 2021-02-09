#include<stdio.h>
main()
{
	int a[10],sum=0,n,i;
	printf("enter no of  elements= ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]=  \n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+(a[i]*a[i]);
	}
	printf("\nthe sum of squares is = %d",sum);
}
