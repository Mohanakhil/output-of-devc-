#include<stdio.h>
int main()
{
	int a,b,c,sum=0,n,i,d=0;
	printf("enter the range\n");
	scanf("%d %d",&a,&b);printf("\n");
	for(i=a;i<=b;i++)
	{
		n=i;
		while(n>0)
		{
		c=n%10;
		sum=sum+(c*c);
		n=n/10;
		}
		if(i==sum)
		{
		printf("%d ",sum);
		d=d+1;}
	}printf("\n%d",d);
	return 0;
}
