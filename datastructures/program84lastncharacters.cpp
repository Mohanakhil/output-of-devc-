#include<stdio.h>
#include<string.h>
main()
{ int i=0,j=0,l=0,n=0,k=0,m=0;
char a[100],b[100],c[100];
printf("enter a string\n"); gets(a);
l=strlen(a)-1;
printf("enter the value of n that is last how many characters?\n"); scanf("%d",&n);
while(l>=n)
{c[k]=a[l];l--;k++;
} k=0;
while(c[m]!='\0')
{ if(c[m]>='a'&&c[m]<='z')
{
  b[j]=c[m]-32; 
  }
  else
	{
	b[j]=c[m];}
	i++;j++;k++;m++;
}b[j]='\0'; printf("after changing last n character into capital is \n");puts(b);

}
