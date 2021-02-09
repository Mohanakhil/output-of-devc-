#include<stdio.h>
#define concat(a,b) a##b
main()
{ 
int c,d,cd;
	printf("enter two strings\n");
	scanf("%d %d",&c,&d);
	cd=concat(c,d);
	printf("after concatenation is %d",cd);
}
