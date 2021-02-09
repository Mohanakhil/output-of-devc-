#include<stdio.h>
#define INCREMENT(x) ++x
main()
{
	char *ptr=" mohan akhil\n";
	int x={10};
	printf("%s",INCREMENT(ptr));
	printf("%d",INCREMENT(x));
	
}
