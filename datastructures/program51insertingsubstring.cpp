#include<stdio.h>
main()
{
	int i=0,j=0,pos=0,k=0;
	char a[100],b[100],c[100];
	printf("enter mainstring\n");
	gets(a);
	printf("enter substring\n");
	gets(b);
	printf("enter the position where to enter substring\n");scanf("%d",&pos);
	while(a[i]!='\0')
	{if(i==pos)
	{	while(b[k]!='\0')
		{c[j]=b[k];
		k++;j++;
		}
		}
		else
		{
		c[j]=a[i];
		j++;
		}
		i++;}
		c[j]='\0';printf("inserted string is\n");
	puts(c);}
