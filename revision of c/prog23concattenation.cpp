#include<stdio.h>
void concat(char *p,char *q)
{
	while(*p!='\0')
	{
		p++;
	}
	while(*q!='\0')
	{
		*p=*q;p++;q++;
	}
	*p='\0';
}

main()
{ char a[20],b[20];
	printf("enter first string\n");
	gets(a);
	printf("enter second string\n");
	gets(b);
	concat(a,b);
	printf("after it is %s",a);
}
