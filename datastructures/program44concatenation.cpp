#include<stdio.h>
main()
{int i=0,j=0;
char first[100],sec[100];
printf("enter first string\n");
gets(first);
printf("enter second string\n");
gets(sec);
while(first[i]!='\0')
i++;
while(sec[j]!='\0')
{
	first[i]=sec[j];
	i++;j++;
}
first[i]='\0';
printf("concatenated string is \n");
puts(first);
}
