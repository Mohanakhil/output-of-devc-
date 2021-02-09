#include<stdio.h>
int main()
{ int n,i,a[100],pos,max,max2,pos2;
printf("enter no of nos\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter no a[%d] = ",i);
	scanf("%d",&a[i]);}max=a[0];pos=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{ max=a[i];pos=i;
		}
	}max2=a[1];pos2=1;
	printf("\n%d is maximum\n",max);
	for(i=0;i<n;i++)
	{
	if(a[i]!=max)
	{
	if(a[i]>max2)
	{
	pos2=i;
	max2=a[i];
	}
	}}
	printf("\nsecond largest element is %d and position of that element is a[%d]",max2,pos2);
	return 0;
}
