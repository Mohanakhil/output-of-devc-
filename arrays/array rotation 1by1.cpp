#include<stdio.h>
main()
{
	int a[100],t,i,n,b;
	printf("enter no of ele\n");
	scanf("%d",&n);
	printf("enter no of ele to do arr rotation\n");
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		printf("enter ele\n");
		scanf("%d",&a[i]);
	}
	printf("before rotation\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);i=0;
int c=0;
	while(i==0&&c<b)
	{
			t=a[i];
		while(i<n-1)
		{
		a[i]=a[i+1];
		i++;
	}
	a[i]=t;c++;i=0;
}
	printf("after rot \n");
for(i=0;i<n;i++)
{ printf("%d\n",a[i]);
}
}
