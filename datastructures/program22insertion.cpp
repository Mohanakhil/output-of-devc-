#include<stdio.h>
int main()
{
	int n,a[100],i,k,pos,insert,t;
	printf("enter no  of nos in an array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
	printf("enter a[%d]= \n ",i);
	scanf("%d",&a[i]);
}printf("enter number you want to insert in array\n");
scanf("%d",&insert);
printf("\nenter the position where to insert\n");
scanf("%d",&pos);
for(i=n-1;i>=pos;i--){

	a[i+1]=a[i];
	}
	a[pos]=insert;n=n+1;
	printf("the inserted array is\n");
for(i=0;i<n;i++)
{printf("a[%d]= %d\n",i,a[i]);
}
	
	
}
