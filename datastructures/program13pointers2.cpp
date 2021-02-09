#include<stdio.h>
int main()
{
	int a,b,sum,add(int*,int*,int*);
	printf("enter 2 nos\n");
	scanf("%d %d",&a,&b);
	add(&a,&b,&sum);
	printf("the sum of 2 nos is %d",sum);
	return 0;
}
int add(int *p,int *q,int *s)
{
	*s=*p+*q;
	
}
