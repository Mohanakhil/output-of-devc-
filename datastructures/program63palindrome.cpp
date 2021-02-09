#include<stdio.h>
main()
{
	int i,j,l;
	char a[100];
	printf("enter string\n");
	gets(a);
	while(a[i]!='\0')
	{
		l++;i++;
	}j=l-1;i=0;
	while(i<=l/2)
{if(a[i]==a[j])
{
	i++;j--;
}else
break;}
if(i>=j) printf("\npalindrom\n");
else printf("\nnot a palindrome\n");

}
