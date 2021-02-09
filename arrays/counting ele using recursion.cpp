#include<stdio.h>
main()
{int d=1;do{	int a[100]={0},t[100]={0},b,n,i,j;
	printf("enter no of ele in array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	printf("enter el\n");	scanf("%d",&a[i]);
	}for(i=0;i<n;i++)
	{printf(" el %d is %d\n",i+1,a[i]);}
printf("enter no of ele to do array rotation\n");
scanf("%d",&b);i=0;
for(j=0;j<n;j++)
{ t[j]=a[i];
	i++;}
for(i=0;i<n-b;i++)
{	a[i]=a[i+b];
}j=0;
for(i=n-b;i<n;i++)
{ a[i]=t[j];j++;
}printf("array after rotation is \n");
for(i=0;i<n;i++)
{	printf("%d ",a[i]);
}printf("enter 2 to end\n");
scanf("%d",&d);}
while(d!=2);
}
