#include<stdio.h>
#include<string.h>
main()
{ int i=0,j=0,l=0,n;
char a[100],b[100];
printf("enter string\n");
gets(a);l=strlen(a);printf("enter n value\n"); scanf("%d",&n);
while(i<(l-n))
{
	i++;
} while(a[i]!='\0')
{ if(a[i]>='a'&&a[i]<='z') b[j]=a[i]-32;
else
	b[j]=a[i];
	i++;j++;
}b[j]='\0';
printf("string is \n");puts(b);
}
