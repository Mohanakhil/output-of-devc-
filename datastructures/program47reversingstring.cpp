#include<stdio.h>
main()
{
	int i,k=0;;
	char a[100],b[100];
	printf("enter string\n");
	gets(a);
	while(a[i]!='\0')
	{
		i++;
	}
	while(i>0)
	{
		b[k]=a[i];i--;k++;
	}
	b[k]='\0';
	
	
		puts(b);
	}
	

