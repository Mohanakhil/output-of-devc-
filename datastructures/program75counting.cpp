#include<stdio.h>
main()
{
	int i=0,d=0,b=0,c=0; char a[100],*p;
	printf("enter a string\n");
	gets(a);p=a;
	while(*p!='\0')
	{
		if(*p>='A'&&*p<='Z') d++;
		if(*p>='a'&&*p<='z') b++;
		if(*p>='0'&&*p<='9') c++;
	p++;	
	} printf("upper , lower, digits are %d %d %d",d,b,c);
}
