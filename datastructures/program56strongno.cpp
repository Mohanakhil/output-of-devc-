#include<stdio.h>
int main()
{
	int n,a,b,i,c,d,fact=1,sum=0;
	printf("enter range for strong no identification\n");
	scanf("%d \n%d",&a,&b);printf("strong nos are ");
for(i=a;i<=b;i++)
{d=i;sum=0;
	while(i>0)
	{fact=1;c=i%10;
	while(c>0)
	{fact=fact*c;
	c=c-1;
	}sum=sum+fact;i=i/10;
	}
	if(sum==d)
	{
	printf("%d ",sum);
	}
}
}
