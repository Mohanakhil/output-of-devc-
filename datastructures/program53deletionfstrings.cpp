#include<stdio.h>
main()
{
	int i=0,j=0,pos=0,l=0;
	char a[100],b[100];
	printf("enter a statement \n");
	gets(a);
	printf("enter the position and length of deletion \n");
	scanf("%d %d",&pos,&l);
	while(a[i]!='\0')
	{
		if(i==pos)
		{while(l>0)
		{
			i=i+1;
			l=l-1;
		}
		}
		b[j]=a[i];
		j++;i++;
		
	}
	printf("string after \n");puts(b);
}
