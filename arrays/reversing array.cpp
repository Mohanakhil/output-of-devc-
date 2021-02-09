#include<stdio.h>
main()
{
	int a[10],b,i,n,end,t=0;
	printf("enter n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter\n");
		scanf("%d",&a[i]);
	}
	printf("before reversal\n");
	for(i=0;i<n;i++)
printf("%d ",a[i]);
	printf("enter no of nos to reverse\n");
	scanf("%d",&b);
	end=b-1;i=0;
	while(i<end)
	{ t=a[i];
	a[i]=a[end];
	a[end]=t;
	i++;end--;
	}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
