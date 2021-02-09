#include<stdio.h>
void concatenate(char *,char *,char *,int );
main()
{ int n;
	char a[100],b[100],c[100];
	printf("enter first string\n");
	gets(a);
	printf("enter second string\n");
	gets(b);
	printf("enter value of first n characters for concatenation\n");
	scanf("%d",&n);
	concatenate(a,b,c,n);
	printf("after concatenation of string it is \n"); puts(c);
}
void concatenate(char *p,char *q,char *r,int m)
{ int i;
while(i<=m)
{*r=*p;r++;p++;i++;
}
	while(*q!='\0')
	{
		
		*r=*q;r++;q++;
	} *r='\0';
}
