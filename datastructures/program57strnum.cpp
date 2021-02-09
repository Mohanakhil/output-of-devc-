#include<stdio.h>
main()
{
	int n,i,sum=0,t,fact=1;
	printf("enter a no\n");
	scanf("%d",&n);t=n;
	while(n>0)
	{
		i=n%10;fact=1;
		while(i>0)
		{
		
		fact=fact*i;
		i--;}
		sum=sum+fact;n=n/10;
	}if(sum==t) printf("it is a strong no");
	else
	printf("not a strong no");
}
