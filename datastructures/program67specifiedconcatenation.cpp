#include<stdio.h>
main()
{
	int i=0,j=0,n=0;
	char a[100],b[100],c[100];
	printf("enter string\n");
	gets(a);printf("enter 2nd string\n\n");
	gets(b);
	printf("enter no of characters\n");
	scanf("%d",&n);
	
	
	while(i<n)
	{c[i]=a[i];
	i++;
	}
while(b[j]!='\0')
{c[i]=b[j];j++;i++;
}c[i]='\0'; printf("after process is \n"); puts(c);
}
