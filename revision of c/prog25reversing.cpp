#include<stdio.h>
void reverse(char *p,char *q,int i)
{ 
	while(*p!='\0')
	{p++;
		
	}p--;
while(i>0)
{
	*q=*p;
	i--;
	q++;p--;
}
}
main()
{ char  a[50],b[50];
int c=0,i=0;
	printf("enter a string\n");
	gets(a);
	while(a[i]!='\0')
	{
		i++;c++;
	} i=0;
	reverse(a,b,c);
	printf("reversed string is\n"); puts(b);
}
