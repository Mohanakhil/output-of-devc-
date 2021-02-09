#include<stdio.h>
void count(char *,char *,int *);
 main()
{
	int n; char a[100],b;
	printf("enter string\n");
	gets(a);
	printf("enter character to count\n");
	scanf("%c",&b);
	count(a,&b,&n);
	printf("count of the character in string is %d\n",n);
}
void count(char *p,char *q,int *r)
{
	while(*p!='\0')
	{ if(*p==*q) *r=*r+1;
	p++;
	}
}
