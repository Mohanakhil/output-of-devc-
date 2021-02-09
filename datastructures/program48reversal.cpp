#include<stdio.h>
#include<string.h>
main()
{
	int i=0,j,k;
	char a[100],t,b[100];
	printf("enter string\n");
	gets(a);j=strlen(a)-1;;printf("j= %d,a[j]= %c\n",j,a[j]);i=0;k=j;
	printf("i=%d",i);
	while(i<=j)
	{
		
		b[i]=a[k];
		i++;k--;
	}b[i]='\0';
	printf("reversed string is \n");
	puts(b);
	
	
	
}
