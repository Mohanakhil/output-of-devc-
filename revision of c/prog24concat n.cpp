#include<stdio.h>
char conn(char *p,char *q,int e,char *r)
{ int i=0;
	while(i<=e)
	{
		*r=*p;
		p++;r++;i++;
	}
	while(*q!='\0')
	{
		*r=*q;r++;q++;
	}
}
main()
{
	char a[20],b[20],c[20];
	int n;
	printf("enter first stri\n");
	gets(a);
	printf("enter second\n");
	gets(b);
	printf("enter value of n in first");
	scanf("%d",&n);
	conn(a,b,n,c);
	printf("after n concate\n"); puts(c);
}
