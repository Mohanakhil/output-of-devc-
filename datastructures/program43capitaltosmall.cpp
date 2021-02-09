#include<stdio.h>
main()
{
	int i;
	char str[100],lower[100];
	printf("enter the string \n");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z')
		lower[i]=str[i]+32;
		else
		lower[i]=str[i];i++;
	}
	printf("capital to small letter conversion is \n");
	puts(lower);
}
