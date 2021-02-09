#include<stdio.h>
int main()
{
	int a,b,i,sum=0,c;
	printf("enter from which no to which no you need even nos\n");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			c=c+1;printf("%d ",i);sum=sum+i;
			
		}
		
	}
	printf("\nsum of even nos is %d\n",sum);
	printf("the no of even nos is %d",c);
	return 0;
}
