#include<stdio.h>
int main()
{
	int n,flag=0,i,p;
	p=3/2;printf("%d\n",p);
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{flag=1;break;
		}
	}
	if(flag==1)
	printf("%d is composite no",n);
	else
	printf("%d is prime no",n);
	return 0;
}
