#include<stdio.h>
main()
{ int i=0,j=0,k=0,pos;
char str[100],text[100],newstr[100];
printf("enter text\n");
gets(text);
printf("enter substring\n");
gets(str);
printf("enter position\n");scanf("%d",&pos);
while(text[i]!='\0')
{
	if(i==pos)
	{while(str[k]!='\0')
	{newstr[j]=str[k];j++;k++;}}
	else
	{newstr[j]=text[i];j++;
	}i++;
}
	newstr[i]='\0';
	printf("after adding substring is \n");puts(newstr);
}
