#include<stdio.h>
main()
{
	int i=0,j=0,k=0;
	char a[100],b[100],c[i];
	printf("enter your statement \n");
	gets(a);
	printf("enter your string to be deleted\n");
	gets(b);
	while(a[i]!='\0')
	{
		if(a[i]==b[k]){
			i++;k++;
		}
		else
		while(a[i]!=b[k])
		{
		
		c[j]=a[i];i++;j++;
		}
		} c[j]='\0';printf("the string after deletion is \n");puts(c);
}
