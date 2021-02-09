#include<stdio.h>
int main()
{
	int a[100],i,n,small(int a[],int n );
	printf("enter no of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	small(a, n);
}
void small(int *b,int p)
{
	int i,min=b[0],t;
	for(i=0;i<p;i++)
	{
		if(b[i]<min){
		
		min=b[i];t=i;}
	}
	printf("the smallest no is a[%d]= %d",t,min);
}
