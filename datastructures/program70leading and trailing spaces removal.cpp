#include<stdio.h>
#include<string.h>
void remove(char *,char *,int l);
main()
{ int l=0,l2=0;
	char a[100],b[100];
	printf("enter string \n"); gets(a);l=strlen(a); printf("length of string is %d\n",l);
	remove(a,b,l);
	printf("after removing first and last character it is \n"); puts(b); l2=strlen(b);printf("length of string is %d",l2);
	
}
void remove(char *p,char *q,int i)
{ int j=0;
p++;
while(j<(i-2))
{
	*q=*p;p++;q++;j++;
}

	
}
