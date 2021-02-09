#include<stdio.h>
main()
{ int i,n,a[20],j,min,b[20],c;
	printf("enter no  of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("enter ele\n");
	 scanf("%d",&a[i]);
	}
	printf("given ele are\n");
	for(i=0;i<n;i++) printf("%d ",a[i]);
	
	for(i=0;i<n;i++)
	{ for(j=i+1;j<n;j++)
	if(a[i]==a[j])
	{ a[i]=100;a[j]=100;
	}
	}printf("\nunpaired ele are");
	for(i=0;i<n;i++)
	{ if(a[i]!=100)
	{ printf("%d ",a[i]);
	}
	}}


