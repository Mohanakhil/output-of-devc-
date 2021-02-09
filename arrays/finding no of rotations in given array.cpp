#include<stdio.h>
main()
{ int a[20],i,n,min,no;
printf("enter no of ele\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter ele\n");
	scanf("%d",&a[i]);
}min=a[0];
for(i=0;i<n;i++)
{
	if(a[i]<min) 
	{
	min=a[i],no=i;}
}
printf("no of times given array is rotated is %d and min is %d\n",no,min);
}
