#include<stdio.h>
main()
{
	int i,j;
 char a[100],b[100];
 printf("enter a string to convert to small letters\n");
 gets(a);	
 while(a[i]!='\0')
 {
 	if(a[i]>='A'&&a[i]<='Z')
 	{
 		b[i]= a[i]+32;
	 }
	 else 
	 b[i]=a[i];
	 i++;
 }
 b[i]='\0'; printf("small string is \n"); puts(b);
}
