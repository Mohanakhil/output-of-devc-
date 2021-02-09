#include<stdio.h>
main()
{
	int i=0,j=0,k=0,e=0,f=0;
	char a[100],b[100],c[100],d[100];
	printf("enter 2 paragraphs (second para in seperate line)\n");
	gets(a);
	while(a[i]!='\n'&&a[i+1]!=' ')
	{
		b[j]=a[i];i++;j++;
		
	}b[j]='\0'; printf("value of b is \n"); puts(b); 
	while(a[i]!=' '&&a[i]!='\n')
	{ i++;
	}
	while(a[i]!='\0')
	{
		c[k]=a[i];k++;i++; 
	} c[k]='\0';printf("value of c is \n"); puts(c);
	while(c[e]!='\0')
	{
		d[e]=c[e];e++;
	} 
	while(b[f]!='\0')
	{
		d[e]=b[f];f++;e++;
	}d[e]='\0';
	printf("after interchanging two paras it is \n"); puts(d);
	
}
