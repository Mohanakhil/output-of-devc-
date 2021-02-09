#include<stdio.h>
main()
{ char a[1000];
	int wordcount=0,linecount=0,charcount=0,i=0;
	printf("type until pressing * symbol\n");
	printf("\n");
	
	printf("enter the text\n");
	scanf("%c",&a[i]);
	while(a[i]!='*')
	{
		i++;scanf("%c",&a[i]);
	}
	a[i]='\0';i=0;
	while(a[i]!='\0')
	{
		if(a[i]=='\n'||a[i]==79) linecount++;
		if(a[i]==' '&&a[i+1]!=' ') wordcount++;
	charcount++;
	i++;} printf(" line count , wordcount, charcount are %d %d %d,",linecount,wordcount,charcount);
}
