#include<stdio.h>
main()
{
	int i=0,j=0,pos=0,l=0;
	char a[100],b[100];
	printf("enter string\n");
	gets(a);
	printf("enter position from where to delete \n");
	scanf("%d",&pos); printf("enter length for deletion\n"); scanf("%d",&l);
	while(a[i]!='\0')
	{
		if(i==pos)
		{while(l>=0)
		{
		i=i+1;l--;
		}}
		else
		{b[j]=a[i];j++;
		}
		i++;
	}b[j]='\0';
	printf("deleted string is\n"); 
	puts(b);
	
}
