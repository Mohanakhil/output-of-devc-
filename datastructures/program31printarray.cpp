#include<stdio.h>
	main()
	{
		int n,a[20],*p=a,i;
		printf("enter no of elements\n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("enter a[%d]= \n",i);
			scanf("%d",p);p=p+1;
		}p=&a[0];
		for(i=0;i<n;i++)
		{
			printf("\n%d",*p);
			*p++;
			
		}
	}

