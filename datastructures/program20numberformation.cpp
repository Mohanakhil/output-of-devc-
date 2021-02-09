#include<stdio.h>
int main()
{
	int n,a[20],num,b,i;
	printf("enter no of digits\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter digit in a[%d]:- ",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		b=a[i];
		num=num*10+b;
	}
	printf("required no is %d ",num);
	return 0;
}
