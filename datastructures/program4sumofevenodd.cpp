#include<stdio.h>
int main()
{
	int a,b,sum1=0,sum2=0,c1=0,c2=0,i;
	printf("enter  the range of nos\n");
	scanf("%d %d",&a,&b);	printf("The even nos in given range are \n");
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			c1=c1+1;sum1=sum1+i;
			printf("%d ",i);
		}
	}printf("\nThe sum of even nos is %d and total count is %d",sum1,c1);
	printf("\n\nthe odd nos are\n ");
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)
		{c2=c2+1;sum2=sum2+i;printf("%d ",i);
		}
	}printf("\nthe sum of odd nos is %d and total count is %d ",sum2,c2);
	return 0;}
