#include<stdio.h>
main()
{
	char *ptr="geeks";
	printf("%s",&*&*ptr);
}
