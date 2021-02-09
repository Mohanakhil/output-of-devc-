#include<stdio.h>
int main()
{
	int n,*p;
	printf("enter  no");
	scanf("%d",&n);
	p=&n;
	printf("\n entered no is %d",*p);
	return 0;
}
