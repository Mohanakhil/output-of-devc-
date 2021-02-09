#include<stdio.h>
main()
{
	int a=0,b=0,n,term=0,i=0,c=0;
	printf("enter no of terms \n");
	scanf("%d",&n);
	printf("enter first and second terms\n");
	scanf("%d \n%d",&a,&b);c=a+b;printf("fibonacci series is %d %d %d ",a,b,c);
	for(i=0;i<n;i++)
	{term=b+c;
	printf("%d ",term);
	b=c;c=term;
	
	}
}
