#include<stdio.h>
void display(char *,char *,char *);
main()
{char b[100],c[100],d[100];
	printf("enter first string\n");
	gets(b);
	printf("enter second string\n");
	gets(c);
	display(b,c,d);
	printf("the concatenated string using pointers and functions is \n"); puts(d);
}
	void display(char *p,char *q,char *r)
	{
	
		while(*p!='\0')
		{
		*r=*p;r++;p++;
		}
		while(*q!='\0')
		{
			*r=*q;r++;q++;
		}
		*r='\0';}
	
	



