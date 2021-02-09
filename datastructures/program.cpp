#include<stdio.h>
int main()
{
	int a[10],b,c=0,i,n;
	printf("enter no of nos\n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("enter");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		while(c<=2)
		{
		printf("%d ",a[i]);
		i=i+1;
		c=c+1;	
		}
		printf("\n");
		c=0;
	}return 0
	;
	}

