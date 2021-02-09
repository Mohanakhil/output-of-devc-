#include<stdio.h>
main()
{	int n,i,max,max2,min,min2,x,y,a[20],t=0;
	printf("enter no of elements = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{		printf("enter a[%d]= \n",i);scanf("%d",&a[i]);
	}max=a[0];min=a[1];max2=a[3];min2=a[4];
	for(i=0;i<n;i++)
	{if(a[i]>max) max=a[i];
	}
for(i=0;i<n;i++)
{if(a[i]!=max) 
if(a[i]>max2)
{
  max2=a[i];x=i;}
}printf("max2= %d,x= %d,max=%d\n\n",max2,x,max);
for(i=0;i<n;i++){
	if(a[i]<min) min=a[i];
}
for(i=0;i<n;i++){
	if(a[i]!=min) 
	if(a[i]<min2)
	{min2=a[i];y=i;
	}}printf("min2=%d, y=%d, min=%d\n\n",min2,y,min);
t=a[y];a[y]=a[x];a[x]=t; printf("t=%d,a[y]=%d, a[x]=%d \n",t,a[x],a[y]);
	printf("\ninterchanged secondary max with secondary min\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
