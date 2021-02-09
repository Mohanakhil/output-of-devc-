#include<stdio.h>
main()
{int a[10][10],i,m,n,j;
printf("enter no of rows and columns in a\n");
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{ printf("enter element in a[%d][%d]= \n",i,j);
scanf("%d",&a[i][j]);
}}
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("  %d   ",a[i][j]);
	}printf("\n\n");
}
	
}
