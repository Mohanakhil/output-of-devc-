#include<stdio.h>
void swap(char *c,char *d)
{ char t;

	while(*c!='\0'||*d!='\0')
	{
		t=*c;
		*c=*d;
		*d=t;
		c=c+1;d=d+1;
	}
}
main()
{
	char a[10],b[10],*p,*q;
	printf("enter first and second string\n");
	scanf("%s %s",a,b);
	
	swap(a,b);
	printf("after interchanging a and b are %s  and %s",a,b);
	
}

