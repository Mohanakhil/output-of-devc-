#include<stdio.h>
int main()
{ int a[100][100],i,j,m,n,sp,si;
int p[100],k[100];
printf("enter no of salesman = ");
scanf("%d",&m);
printf("enter no of products= ");
scanf("%d",&n);
for(i=0;i<m;i++){
	for(j=0;j<n;j++)
	{printf("enter sales of %dst salesman in %d product",i,j);
	scanf("%d",&a[i][j]);
	}
}

for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{
	p[i]=a[i][j]+p[i];
}}
printf("\nthe total sales by salesman are ");
for(i=0;i<m;i++)
{printf("\n%dst salesman= %d\n",i,p[i]);
}
for(j=0;j<n;j++)
{for(i=0;i<m;i++)
{k[j]=k[j]+a[i][j];
}}printf("total sales of  each product are\n");
for(j=0;j<n;j++)
{
printf("%d product total sales are=%d \n",j,k[j]);
}

	
		
	}
