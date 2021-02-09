#include<stdio.h>
#include<string.h>
main()
{

int i=0,n=0,l1=0,l2=0,count=0,m=0;
char a[100],b[100],*p;
printf("enter string\n");
gets(a);
printf("enter word\n");
gets(b); l1=strlen(a);l2=strlen(b); printf("word length is %d\n",l2);p=b;
while(a[i]!='\0')
{m=i;
	while(*p!='\0')
	{
		if(a[i]==*p) 
	{
			n++;i++;}
			p++;
	}p=b; if(n==l2) 
	{
	count++; i=m;i=i+l2;}
	
	else 
{
		i=m;}
	n=0;i++;
}
printf("the no of times the word appears is %d\n",count);
}
