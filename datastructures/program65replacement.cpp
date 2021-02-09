#include<stdio.h>
main()
{
	int i=0,j=0;
	char a[100],b[100],*p,*q;
	printf("enter string in a \n");p=a;
	gets(p);q=b;
	printf("enter string to replace in a \n");
	gets(q); printf("\n a has\n");puts(p); printf("\n b has \n"); puts(q);
	while(*q!='\0')
	{
		*p=*q;
		q++;p++;
	}
	*p='\0';q=b;p=a;printf("\n a has\n");puts(p); printf("\n b has \n"); puts(q);
printf("after replacing in a \n");
while(*p!='\0')
{
	printf("%c",*p);
	p++;
}
}
