#include<stdio.h>
int main()
{
	int f,n,evenodd(int);
	printf("enter a no\n");
	scanf("%d",&n);
	f=evenodd(n);
	if(f==1)
	printf("\n%d is a even no",n);
	else
	printf("\n%d is an odd no",n);
	return 0;
}
int evenodd(int a)
{
	if(a%2==0)
	return 1;
	else
	return 0;
}
