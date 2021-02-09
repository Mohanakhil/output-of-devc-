#include<stdio.h>
main()
{
	char str[100],upstr[100];
	int i=0;
	printf("enter the string\n");
	gets(str);
	while(str[i]!='\0')
{
	if(str[i]>='a'&&str[i]<='z')
	upstr[i]=(str[i]-32);
	else
	upstr[i]=str[i];
	i++;
}upstr[i]='\0';
printf("\n the string is \n");
puts(upstr);
}
