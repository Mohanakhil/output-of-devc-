#include<stdio.h>
main()
{
	int i=0,j=0,k=0,l=0;
	char a[100],b[100];
	printf("enter the string\n");
	gets(a);
	printf("enter the position of first character of substring= \n");
	scanf("%d",&k);
	printf("enter no of characters");
	scanf("%d",&j);i=k+j;
	while(a[k]!='\0'&&(k<i))
	
	
	{
		b[l]=a[k];l++;
	
		k++;}
		b[l]='\0'; printf("string is \n");puts(b);
	
	
}
