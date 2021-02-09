#include<stdio.h>
main()
{ int i=0;
	char a[100],b,c;
	printf("enter a string\n");
	gets(a);
	printf("enter replacement and to be replaced with \n");
	scanf("%c %c",&b,&c); 
	while(a[i]!='\0')
	{ if(a[i]==b)
	{
		a[i]=c;
	}
	i++;
	}
	printf("corrected string is \n"); puts(a);
}
