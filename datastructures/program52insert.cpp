#include<stdio.h>
#include<conio.h>
main()
{
	char text[100],str[20],instext[100];
	int i=0,j=0,k=0,pos=0;
	printf("enter main text\n");
	gets(text);
	printf("enter string to be inserted\n");
	gets(str);
	printf("\nenter position of string for insertion\n");
	scanf("%d",&pos);
	while(text[i]!='\0')
	{
		if(i==pos)
		{while(str[k]!='\0')
		{
			instext[j]=str[k];j++;k++;
		}
		}
		else
		{instext[j]=text[i];j++;
		}i++;
	}instext[j]='\0';printf("inserted string is \n ");puts(instext);
}
