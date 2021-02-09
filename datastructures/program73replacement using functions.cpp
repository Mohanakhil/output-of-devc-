#include<stdio.h>
void repl(char *,char *,char * );
main()
{ char a[100],b,c;
printf("enter string\n");
gets(a);
printf("enter given and replacement character \n");
scanf("%c %c",&b,&c);
repl(a,&b,&c);
	printf("corrected string is \n"); puts(a);
}
void repl(char *p,char *q,char *r)
{
	while(*p!='\0')
	{ if(*p==*q)
	{*p=*r;
	}
	p++;
	}
}
