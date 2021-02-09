#include<stdio.h>
main()
{
	int a[20],i,n,cz=0,cnz=0,b;
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("enter ele\n");
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{ if(a[i]==a[i+1])
	{ a[i]=2*a[i];
	a[i+1]=0;
	}
		
	} printf("before moving zeroes to end\n");
		for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	for(i=0;i<n;i++)
	{if(a[i]==0)cz++;
	if(a[i]!=0) cnz++;
	}printf("no of zer are %d and nonzeros are %d\n",cz,cnz);
	i=0;b=0;
	while(i<n)
	{ if(a[i]!=0)
	{ a[b]=a[i];b++;
	}i++;
	}i=cnz;
	while(i<n)
	{ a[i]=0;i++;
	}
	printf("after modification\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
