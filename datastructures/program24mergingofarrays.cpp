#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],i,m,n,pos=0;
	printf("enter no of elements in first and second arrays");
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		printf(" enter a[%d]= ",i);
		scanf("%d",&a[i]);
	}
for(i=0;i<n;i++)
{
	printf("enter b[%d]= ",i);
	scanf("%d",&b[i]);
}
for(i=0;i<m;i++)
{
	c[pos]=a[i];pos++;
}
for(i=0;i<n;i++)
{c[pos]=b[i];pos++;
}printf("the sorted array is \n");
for(i=0;i<m+n;i++)
{printf("c[%d]= %d \n",i,c[i]);
}
return 0;
}
