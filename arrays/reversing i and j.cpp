#include<stdio.h>
main()
{
	int n,a[20],b[20],i;
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ printf("enter ele\n");
	scanf("%d",&a[i]);
	}int k=0;
	for(i=0;i<n;i++)
	{ int j=i;
	while(i<n)
	{
	 if(a[i]==k)
	{ int index=i;
	b[k]=index;k++;
	}i++;
	}
		i=j;
	}
	printf("\nafter modification is \n");
	
		for(k=0;k<(n);k++)
	printf("%d ",b[k]);
}
