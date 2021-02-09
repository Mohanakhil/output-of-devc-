#include<stdio.h>
void replace(char *,char *,char ,char );
main()
{
	char a[100],b[100],e,d;
	printf("enter a string\n");
	gets(a);     printf("enter next character\n"); 
	scanf("%c",&d);  	printf("enter a string to be replaced\n");	scanf("%c",&e); printf("%c %c",e,d);
	
	replace(a,b,e,d);
	printf("after replacing character the string is \n");
	puts(b);
}
void replace(char *p,char *q,char m,char n)
{
	while(*p!='\0')
	{
		if(*p==m)
		{*q=n;q++;p++;
		}
		else
		{*q=*p;p++;q++;
		}
		
	}*q='\0';
}
