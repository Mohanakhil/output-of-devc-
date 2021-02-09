#include<stdio.h>
main()
{
	int a[20],j,i,n,b[20];
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("enter ele\n");
	scanf("%d",&a[i]);
	} j=0;
	for(i=0;i<n;i++)
	{ int l=0;
	while(l<n)
	{ 
	if(a[l]==j)
	{ b[j]=l;
	}l++;
	}
	j++;	
	}
	printf("after rearrangement\n");
	for(i=0;i<n;i++)
	printf("%d ",b[i]);
}
