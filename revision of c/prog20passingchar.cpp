#include<stdio.h>
char print(char a[])
{
	printf("typed password is %s\n",a);
}
int p(int c[],int n)

{ for(int j=0;j<n;j++)
{

	printf("\n%d\n",c[j]);
}}
main()
{ char b[10];
int i=0,c[10],opt=1;
	printf("enter string\n");
	scanf("%s",b);
do
{ 
	printf("ente array element\n");
	scanf("%d",&c[i]);
	i++;
	printf("continue or not?\n\n");
	
	scanf("%d",&opt);
	
}while(opt!=0);
p(c,i);
	print(b);
	
	
}
