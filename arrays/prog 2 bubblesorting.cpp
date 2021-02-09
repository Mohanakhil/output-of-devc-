#include<stdio.h>
main()
{
	int a[20],j,i,n,temp;
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("enter ele\n");
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{ for(j=0;j<n-i-1;j++)
	{ if(a[j]>a[j+1])
	{ temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
	}
	} printf("after bubble sorting\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
}
