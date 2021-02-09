#include<stdio.h>
main()
{ int b,i=0,j=0,a[10]={0},c[10]={0},n=0,t=0;
do
{	printf("enter ele\n");
	scanf("%d",&a[i]);
	printf("press 2 to end\n");
	scanf("%d",&b);n++;i++;
}while(b!=2);
printf("before sorting\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
	{	if(a[i]>a[j]) 
		{ t=a[i];
		a[i]=a[j];
		a[j]=t;
		}
	}
	}
	printf("\n total count is %d\n",n);printf("after sorting\n");
for(i=0;i<n;i++) 
{printf("%d ",a[i]);
}
j=0;int d=0;printf("value of j and n are %d %d\n",j,n);
for(i=0;i<n;i++)
{ 
if(a[i]!=a[i+1]) 
{
c[j]=a[i];printf("\n after val  in c[%d]=%d \n",j,c[j]);j++;d++;
}
}
printf("\nafter dele duplicates is \n");
for(i=0;i<d;i++) 
printf("%d ",c[i]);

}
