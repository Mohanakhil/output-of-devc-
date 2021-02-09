#include<stdio.h>
int main()
{int m,n,sum;
printf("enter range\n\n");
scanf("%d %d",&m,&n);
while(m<=n)
{
	sum=sum+m;m=m+1;
}printf("sum is %d",sum);
return 0;
}
