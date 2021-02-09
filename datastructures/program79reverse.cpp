#include<stdio.h>
#include<string.h>
main()
{int i=0,j=0,k=0,l=0;
	char a[100],b[100];
	printf("enter string\n");
	gets(a); l=strlen(a)-1;
	while(l>=0)
{ b[i]=a[l];i++;l--;
}b[i]='\0';printf("reversed string is \n"); puts(b);

}
