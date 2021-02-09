#include<stdio.h>
main()
{
	int i=0,j=0,k=0;
	char a[100],b[100];
	printf("enter a string\n"); gets(a);
	while(a[i]!='\0')
	{
		if(a[i]==';') i++;
		
		if(a[i]=='.') b[k]=',';
		else
		b[k]=a[i];
		i++;k++;
		
		
	}b[k]='\0'; printf("after deleting ; and replacing . with comma it is \n"); puts(b);
}
