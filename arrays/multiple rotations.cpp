#include<stdio.h>
main()
{
	int a[20],i,n,temp;
	printf("enter no of elements in an array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ printf("enter ele\n");
	scanf("%d",&a[i]);
	}
	printf("before rotation\n"); for(i=0;i<n;i++) printf("%d ",a[i]);
	int b=2;
	do{
	printf("enter no of times to do rotation \n");
	scanf("%d",&b); int c=0;i=0;
	while(c<b)
	{ temp=a[i];
	while(i<n-1)
	{ a[i]=a[i+1];i++;
	}
	a[i]=temp;c++;
	i=0;	
	}
	printf("after rotating %d times\n",b);
	for(i=0;i<n;i++) printf("%d ",a[i]);
	printf("press 2 for term\n");scanf("%d",&b);
}while(b!=2);
}
