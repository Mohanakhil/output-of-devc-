#include<stdio.h>
main()
{
	int a[20],b[20],i,n,temp,k,min,j;
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("enter ele\n");
	scanf("%d",&a[i]);
	} printf("original array is \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	for(i=0;i<n;i++)
	{ min=a[i];
	
	for(j=i+1;j<n;j++)
	{ if(a[j]<min) 
	{
	min=a[j];k=j;
	}
	}
	if(min!=a[i])
	{
	
temp=a[i];
a[i]=a[k];
a[k]=temp;}
	}printf("after ascending \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	for(i=0;i<n-1;i++)
	{
		if(i%2==0)
		{ if(a[i]<a[i+1])
		{ temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		}
		}
	}
	printf("after arranging even and odd indexes such that even index value is >odd index value\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
