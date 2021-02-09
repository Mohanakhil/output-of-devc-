#include<stdio.h>
#include<string.h>
main()
{	int i=0,j=0,k=0,m=0,c=0,l=0,n=0;
	char a[100],b[100],d[100],e[100];
	printf("enter string after leaving one space \n");
	gets(a);l=strlen(a)-1;
	while(l>=0)
	{ b[i]=a[l];i=i+1;l=l-1;
		}b[i]='\0';i=0; printf("reversed string is \n");puts(b);
		while(b[i]!='\0')
		{
			while(b[i]!=' ')
			{ c++;i++; 
				
				}n=c;
			while(c>=0)
			{
				d[k]=b[i];c--;k++;i--;
			}i=i+n;i=i+2;c=0;
			} 
		d[k]='\0';printf("after reversing individually \n"); puts(d);
	

		while(a[j]!='\0')
{ e[j]=a[j];j++;
}
while(d[m]!='\0')
{
	e[j]=d[m];m++;j++;
} e[j]='\0';
printf("symmetric form of string is\n"); puts(e);
}
	
	
