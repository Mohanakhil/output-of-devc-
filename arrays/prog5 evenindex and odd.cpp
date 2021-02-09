#include<stdio.h>
main()
{
	int a[20],i,n,temp;
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("enter ele\n");
	scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{ 
	if(a[i]<a[i-1])
	{ temp=a[i];
	a[i]=a[i-1];
	a[i-1]=temp;
	}
	}
	printf("after arr indexes is \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
