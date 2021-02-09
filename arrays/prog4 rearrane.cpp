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
while(i!=0)
	{ temp=a[a[i]];
	a[a[i]]=a[i];
		i=temp;i=0;
	}
	for(i=0;i<n;i++) printf("%d ",a[i]);
}
