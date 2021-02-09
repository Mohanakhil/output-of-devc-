#include<stdio.h>
main()
{
	int l=0,u=0;
	char a[100],*ptr;
	printf("enter string\n");
	ptr=a;
	gets(ptr);
	while(*ptr!='\0')
	{
		if(*ptr>='A'&&*ptr<='Z') u++;
		else
		if(*ptr>='a'&&*ptr<='z') l++;
		ptr++;
		
	}printf("capital and small are %d %d",u,l);
}
