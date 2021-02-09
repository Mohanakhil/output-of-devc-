#include<stdio.h>
main()
{
	int i,j;
	char a[100],b[100],*p,*q;
	p=a;q=b;
	printf("enter first string\n");
	gets(p);
	printf("enter second\n"); gets(q);
	while(*p!='\0')
	{p++;
	}
	while(*q!='\0')
	{*p=*q;
	p++;q++;
	}*p='\0';	p=a; printf("concatenated string is \n"); 
	while(*p!='\0')
	{ printf("%c",*p);p++;
	}
}
