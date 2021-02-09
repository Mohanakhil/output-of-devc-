#include<stdio.h>
main()
{
	int i=0,j=0,k=0,l=0,m=0,n=0;
	char a[100],b[100],c[100],d[100];
	printf("enter main string\n"); gets(a); printf("enter string to be deleted\n");gets(b);
	printf("enter string to paste \n");gets(c);
	while(a[i]!='\0')
	{ j=0;k=i;
	while(a[k]==b[j]&&b[j]!='\0')
	{
		k++;j++;
	}
		if(b[j]=='\0')
{ l=k;
while(c[m]!='\0')
{d[n]=c[m];n++;m++;
}
	}d[n]=a[l];
	n++;l++;i++;
		}d[n]='\0';
	printf("modified string is \n");puts(d);
}
