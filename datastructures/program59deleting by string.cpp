#include<stdio.h>
main()
{
	int i=0,j=0,k=0,l=0,m=0;
	char a[100],b[100],c[100];
	printf("enter main string\n");
	gets(a);
	printf("enter string to be deleted\n");
	gets(b);
	while(a[i]!='\0')
	{k=0;j=i;
		while(a[j]==b[k]&&b[k]!='\0')
		{
			j++;k++;
		}
		if(b[k]=='\0')
		{m=j;
	
		}	c[l]=a[m];m++;l++;i++;
	
	}c[l]='\0';
	printf("after deltion\n");puts(c);
}
