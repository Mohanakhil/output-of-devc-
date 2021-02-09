#include<stdio.h>
#define max(i,j) (((i)>j)?i:j)
main()
{ int a,b;
	printf("enter 2 nos\n");
	scanf("%d %d",&a,&b);
	printf("max is %d",max(a,b));
}
