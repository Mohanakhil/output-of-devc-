#include<stdio.h>
main()
{
	int i,j=0,a[20],b[20]={0},n,t;
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter ele\n");
		scanf("%d",&a[i]);
	}printf("original array is \n");
	
	for(i=0;i<n;i++) printf("%d ",a[i]);
	
	for(i=0;i<n;i++)
	{ 
	 
		if(a[i]!=0)
		{ b[j]=a[i];j++;
		}
	}printf("\nafter modification is \n");
	for(j=0;j<n;j++) printf("%d ",b[j]);
}
