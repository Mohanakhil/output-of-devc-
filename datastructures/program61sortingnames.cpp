#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int i=0,j=0,n=0;
	char a[100][100],temp[100];
	printf("enter no of studets\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	printf("enter name of %d student = ",i+1);
		gets(a[i]);
	}
for(i=0;i<n;i++)
{
	for(j=0;j<(n-i-1);j++)
	{
		if(strcmp(a[j],a[j+1])>0)
		{
			strcpy(temp,a[j]);
			strcpy(a[j],a[j+1]);
			strcpy(a[j+1],temp);
		}
	}
}printf("\nafter sorting names\n\n");
for(i=0;i<n;i++)
{
	puts(a[i]);printf(" \n ");
}}
