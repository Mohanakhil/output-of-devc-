#include<stdio.h>
main()
{
	char a[20],t;
	int i,n,end;
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ printf("enter ele\n");
	scanf("%s",&a[i]);
	}
	i=0;end=n-1;
	while(i<end)
	{ t=a[i];
	a[i]=a[end];
	a[end]=t;i++;end--;	
	}
	printf("after reversing character array\n");	
for(i=0;i<n;i++)
{
printf("%s",a[i]);}
}
