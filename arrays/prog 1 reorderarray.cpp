#include<stdio.h>
main()
{
	int a[20],index[20],i,n,in,b[20],k=0;
	printf("enter no of ele\n");
	scanf("%d",&n);
	printf("enter normal array\n");
for(i=0;i<n;i++ )
	{ printf("enter ele\n");
	scanf("%d",&a[i]);
	}
	printf("enter index array\n");
	for(i=0;i<n;i++)
	{printf("enter ele\n");
	scanf("%d",&index[i]);
	}
	printf("both arrays are \n");
	for(i=0;i<n;i++) printf("%d ",a[i]);
	printf("\nindex arr\n");
	for(i=0;i<n;i++) printf("%d ",index[i]);i=0;int j=0;
	while(i<n)
	{
	int l=0;
	while(l<n)
	{ 
	if(index[l]==j) 
	{ b[k]=a[l];k++;
	}l++;
	}j++;
	i++;	
	}
		printf("\nindex arr\n");
for(i=0;i<n;i++) printf("%d ",i);
	printf("\nafter rearrangement\n");
	for(i=0;i<k;i++) printf("%d ",b[i]);
	
}
